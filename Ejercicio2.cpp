#include <iostream>
using namespace std;

// Sesion_01_Estudiantes_Ejercicio_2.cpp

//Sesion_01_Estudiantes.md
//Ejercicio 02: Jerarquia de 3 niveles

class Animal {
    public:
    void metodo() {
        cout<<"Esta es la clase base"<<endl;
    }
};
class Mamifero: public Animal {

};
class Perro:public Mamifero {

};

int main() {
    Mamifero m1;
    Perro p1;

	Animal* ptr1=&m1;
	ptr1->metodo();
	Animal* ptr2 = &p1;
    ptr2->metodo();


    return 0;

}