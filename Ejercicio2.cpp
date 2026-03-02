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
class B1 {

};
class B2 {

};

int main() {
    B1 b1;
    B2 b2;
    //Upcast de puntero a A apunta a objeto B1
    Base* ptr = &b1;
    ptr->metodo();
    //Upcast:Puntero de base apunta a objeto B2
    A*ptr2 = &b2;
    ptr2->metodo();

    return 0;

}