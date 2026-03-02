#include <iostream>

using namespace std;

class Vehiculo {
public:
    virtual void tipo() { cout << "Vehiculo genérico" << endl; }
    virtual ~Vehiculo() {}
};

class Automovil : public Vehiculo {
public:
    void tocarClaxon() { cout << "¡Beep beep!" << endl; }
};

class Moto : public Vehiculo {
public:
    void hacerCaballito() { cout << "Moto en una rueda" << endl; }
};

int main() {
    Vehiculo* miVehiculo = new Moto();

    cout << "Intentando convertir una Moto en un Automovil..." << endl;


    Automovil* miAuto = dynamic_cast<Automovil*>(miVehiculo);

    if (miAuto == nullptr) {
        cout << "RESULTADO: El cast devolvió nullptr (Fallo detectado)." << endl;
        cout << "Explicación: No puedes tratar una Moto como si fuera un Automovil." << endl;
    } else {
        miAuto->tocarClaxon();
    }

    delete miVehiculo;

    return 0;
}