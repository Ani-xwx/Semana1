#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void comer() {
        cout << "El animal esta comiendo..." << endl;
    }
    virtual ~Animal() {}
};

class Mamifero : public Animal {
public:
    void amamantar() {
        cout << "El mamifero esta amamantando." << endl;
    }
};

class Perro : public Mamifero {
public:
    void ladrar() {
        cout << "¡Guau guau! (Metodo exclusivo de Perro)" << endl;
    }
};

int main() {
    cout << "--- Prueba 1: Animal* apuntando a un Perro ---" << endl;
    Animal* miAnimal1 = new Perro();
    Perro* miPerro = dynamic_cast<Perro*>(miAnimal1);

    if (miPerro != nullptr) {
        cout << "Cast exitoso: El animal es un perro." << endl;
        miPerro->ladrar();
    } else {
        cout << "Cast fallido: El animal no es un perro." << endl;
    }

    cout << endl;

    cout << "--- Prueba 2: Animal* apuntando a un Mamifero (no Perro) ---" << endl;
    Animal* miAnimal2 = new Mamifero();

    Perro* intentoPerro = dynamic_cast<Perro*>(miAnimal2);

    if (intentoPerro != nullptr) {
        cout << "Cast exitoso." << endl;
        intentoPerro->ladrar();
    } else {
        cout << "Cast fallido: El puntero es nullptr." << endl;
        cout << "Explicacion: Este animal es un Mamifero, pero no es un Perro." << endl;
    }

    delete miAnimal1;
    delete miAnimal2;

    return 0;
}