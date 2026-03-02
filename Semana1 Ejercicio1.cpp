#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Sesion_01_Estudiantes_Ejercicio_1.cpp

// Sesion_01_Estudiantes.md
// Ejercicio 01: Vehiculo y Automovil - upcast

class Vehiculo {
    protected:
		string nombre;
		string tipo;

	public:
		Vehiculo()
		{
			nombre="";
			tipo="";
		};

		Vehiculo(string nom, string tip)
		{
			nombre=nom;
			tipo=tip;
		};

		void toString()
		{
			cout << "Vehiculo: " << nombre << endl;
		}

		virtual ~Vehiculo() {}
};

class Automovil: public Vehiculo
{
	protected:
    	string marca;
    	string modelo;
    	int year;
	public:

		Automovil()
		{
			marca = "";
			modelo = "";
			year = 0;
		};

		Automovil(string mar, string mod, int yr)
		{
			marca = mar;
			modelo = mod;
			year = yr ;
		};
};

int main() {
    Automovil a;
    Vehiculo* p = &a;  // Upcast
	p->toString();
    return 0;
}