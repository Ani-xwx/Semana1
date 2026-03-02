#include <iostream>
#include <string>
using namespace std;

class Curso;

class Estudiante {
private:
    string nombre;
    Curso* cursoAsignado;

public:
    Estudiante(string n) : nombre(n), cursoAsignado(nullptr) {}

    void inscribirEnCurso(Curso* c);
    void mostrarInfo();
    string getNombre() { return nombre; }
};

class Curso {
private:
    string nombreCurso;
    Estudiante* mejorEstudiante;

public:
    Curso(string n) : nombreCurso(n), mejorEstudiante(nullptr) {}

    void setMejorEstudiante(Estudiante* e);
    void mostrarInfo();
    string getNombreCurso() { return nombreCurso; }
};


void Estudiante::inscribirEnCurso(Curso* c) {
    cursoAsignado = c;
    cout << nombre << " se ha inscrito en " << c->getNombreCurso() << endl;
}

void Estudiante::mostrarInfo() {
    cout << "Estudiante: " << nombre;
    if (cursoAsignado)
        cout << " | Curso: " << cursoAsignado->getNombreCurso();
    cout << endl;
}

void Curso::setMejorEstudiante(Estudiante* e) {
    mejorEstudiante = e;
    cout << "El mejor de " << nombreCurso << " ahora es " << e->getNombre() << endl;
}

void Curso::mostrarInfo() {
    cout << "Curso: " << nombreCurso;
    if (mejorEstudiante)
        cout << " | Estudiante Destacado: " << mejorEstudiante->getNombre();
    cout << endl;
}

int main() {
    Estudiante* est = new Estudiante("Juan Perez");
    Curso* cur = new Curso("Programacion C++");

    est->inscribirEnCurso(cur);
    cur->setMejorEstudiante(est);

    cout << "\n--- Estado Final ---" << endl;
    est->mostrarInfo();
    cur->mostrarInfo();

    delete est;
    delete cur;
    return 0;
}