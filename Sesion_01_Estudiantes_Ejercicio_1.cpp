#include <iostream>
#include <vector>

using namespace std;

class Vehiculo {
public:
    virtual void identificar() {
        cout << "Soy un vehiculo general." << endl;
    }
    virtual ~Vehiculo() {}
};

class Automovil : public Vehiculo {
public:
    void identificar() override {
        cout << "Soy un automovil especifico." << endl;
    }

    void tocarClaxon() {
        cout << "¡Beep beep! (Metodo exclusivo de Automovil)" << endl;
    }
};

int main() {
    Vehiculo* miVehiculo = new Automovil();

    Automovil* miAuto = dynamic_cast<Automovil*>(miVehiculo);


    if (miAuto != nullptr) {
        cout << "--- Cast exitoso ---" << endl;
        miAuto->tocarClaxon();
    } else {
        cout << "--- Error: El vehiculo no es un automovil ---" << endl;
    }

    delete miVehiculo;

    return 0;
}