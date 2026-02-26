#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Vehiculo {
    public:

};

class Automovil: protected Vehiculo {
    protected:
    string marca;
    string modelo;
    int year;
};

int main() {
    Automovil a;
    Vehiculo* p = &a;  // Upcast

    return 0;
}