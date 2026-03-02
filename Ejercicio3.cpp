#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 3;

// Sesion_01_Estudiantes_Ejercicio_3.cpp


//Sesion_01_Estudiantes.md
//Ejercicio 03: Array de punteros a base

class Figura {
public:
    virtual double area() = 0;
    virtual ~Figura() {};
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}

    double area() override {
        return 3.14159 * radio * radio;
    }
};

// Derived Class: Rectangulo
class Rectangulo : public Figura {
private:
    double base, altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    double area() override {
        return base * altura;
    }
};

int main() {
    // 1. Create the array of pointers
    Figura* figuras[MAX];

    // 2. Fill the array with derived objects
    figuras[0] = new Circulo(5.0);
    figuras[1] = new Rectangulo(4.0, 6.0);
    figuras[2] = new Circulo(2.5);

    // 3. Loop through and show the area
    cout << "--- Areas de las Figuras ---" << endl;
    for (int i = 0; i < MAX; i++) {
        cout << "Figura [" << i << "] Area: " << figuras[i]->area() << endl;
    }

    // 4. Memory Cleanup (Don't forget this!)
    for (int i = 0; i < MAX; i++) {
        delete figuras[i];
    }

    return 0;
}