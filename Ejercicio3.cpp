#include <iostream>
using namespace std;

class Figura {
public:
    virtual double area()=0;
    virtual~Figura();

};
class Circulo {
    void calcular()override {
        cout<<"Circulo"<<endl;
    }

};
class Rectangulo {

};
int main() {
    Figura* figura=new Circulo();
    figura->calcular();
    figura->pruebas();
    return 0;
}