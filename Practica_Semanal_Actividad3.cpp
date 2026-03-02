#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Libro;

class Autor {
private:
    string nombre;
    vector<Libro*> libros;

public:
    Autor(string _nombre) : nombre(_nombre) {};
    void agregarLibro(Libro* libro) {
        libros.push_back(libro);
    };
    void mostrarLibros() {
        cout << "Libros de " << nombre << ":" << endl;
        for (Libro* l : libros) {
            cout << "- " << l->getTitulo() << endl;
        }
    }
    string getNombre() { return nombre; };
};

class Libro {
private:
    string titulo;
    Autor* autor;

public:
    Libro(string _titulo, Autor* _autor) : titulo(_titulo), autor(_autor) {
        if (autor != nullptr) {
            autor->agregarLibro(this);
        }
    }
    string getTitulo() { return titulo; };
    void mostrarInfo() {
        cout << "Libro: " << titulo << " | Autor: " << autor->getNombre() << endl;
    };
};

int main() {
    Autor* borges = new Autor("Jorge Luis Borges");

    Libro* l1 = new Libro("Ficciones", borges);
    Libro* l2 = new Libro("El Aleph", borges);

    borges->mostrarLibros();
    l1->mostrarInfo();

    delete borges;
    delete l1;
    delete l2;

    return 0;
}