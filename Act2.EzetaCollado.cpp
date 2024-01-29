#include <iostream>
#include <list>

class Neurona {
private:
    int id;
    double voltaje;
    int posicionX;
    int posicionY;
    int red;
    int green;
    int blue;

public:
    Neurona(int id, double voltaje, int posicionX, int posicionY, int red, int green, int blue)
        : id(id), voltaje(voltaje), posicionX(posicionX), posicionY(posicionY), red(red), green(green), blue(blue) {}

    void print() {
        std::cout << "Neurona " << id << ":" << std::endl;
        std::cout << "Voltaje: " << voltaje << std::endl;
        std::cout << "Posicion: (" << posicionX << ", " << posicionY << ")" << std::endl;
        std::cout << "Color: (" << red << ", " << green << ", " << blue << ")" << std::endl;
    }

    int getId() {
        return id;
    }
};

class AdminNeuronas {
private:
    std::list<Neurona> neuronas;

public:
    void agregarInicio(Neurona neurona) {
        neuronas.emplace_front(neurona);
    }

    void agregarFinal(Neurona neurona) {
        neuronas.emplace_back(neurona);
    }

    void mostrar() {
        for (const Neurona& neurona : neuronas) {
            neurona.print();
        }
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    AdminNeuronas administrador;

    Neurona neurona1(1, 0.5, 10, 20, 255, 0, 0);
    Neurona neurona2(2, 1.0, 30, 40, 0, 255, 0);

    admin.agregarInicio(neurona1);
    admin.agregarFinal(neurona2);

    admin.mostrar();

    return app.exec();
}
