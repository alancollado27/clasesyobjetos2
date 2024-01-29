#include <iostream> // Incluye la librería de entrada y salida de flujo de C++
#include <list> // Incluye la lista doblemente enlazada de C++

class Neurona {
private:
    int id; // Identificador único de la neurona
    double voltaje; // Voltaje de la neurona
    int posicionX; // Posición en el eje X de la neurona
    int posicionY; // Posición en el eje Y de la neurona
    int red; // Componente roja del color de la neurona
    int green; // Componente verde del color de la neurona
    int blue; // Componente azul del color de la neurona

public:
    Neurona(int id, double voltaje, int posicionX, int posicionY, int red, int green, int blue)
        : id(id), voltaje(voltaje), posicionX(posicionX), posicionY(posicionY), red(red), green(green), blue(blue) {}

    void print() { // Función para imprimir los atributos de la neurona
        std::cout << "Neurona " << id << ":" << std::endl;
        std::cout << "Voltaje: " << voltaje << std::endl;
        std::cout << "Posicion: (" << posicionX << ", " << posicionY << ")" << std::endl;
        std::cout << "Color: (" << red << ", " << green << ", " << blue << ")" << std::endl;
    }

    int getId() { // Función para obtener el identificador de la neurona
        return id;
    }
};

class AdminNeuronas {
private:
    std::list<Neurona> neuronas; // Lista de neuronas

public:
    void agregarInicio(Neurona neurona) {
        neuronas.emplace_front(neurona); // Agrega una neurona al inicio de la lista
    }

    void agregarFinal(Neurona neurona) {
        neuronas.emplace_back(neurona); // Agrega una neurona al final de la lista
    }

    void mostrar() {
        for (const Neurona& neurona : neuronas) { // Itera sobre cada neurona en la lista
            neurona.print(); // Imprime los atributos de la neurona
        }
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv); // Inicializa la aplicación de Qt

    AdminNeuronas administrador; // Crea un administrador de neuronas

    Neurona neurona1(1, 0.5, 10, 20, 255, 0, 0); // Crea una neurona con atributos específicos
    Neurona neurona2(2, 1.0, 30, 40, 0, 255, 0); // Crea otra neurona con atributos específicos

    administrador.agregarInicio(neurona1); // Agrega la primera neurona al inicio de la lista
    administrador.agregarFinal(neurona2); // Agrega la segunda neurona al final de la lista

    administrador.mostrar(); // Imprime los atributos de todas las neuronas en la lista

    return app.exec(); // Ejecuta la aplicación de Qt
}
