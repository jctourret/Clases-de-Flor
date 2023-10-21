#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

enum Coches {
    chevrolet,
    ford,
    ferrari
};

int main()
{
    const int alumnosEnElAula = 30; //const: es una variable que no puede variar.
    const int columnasDeSillas = 10; //const: es una variable que no puede variar.
    const int filasDeSillas = 3; //const: es una variable que no puede variar.
    const int ancho = 30; //const: es una variable que no puede variar.
    const int alto = 30; //const: es una variable que no puede variar.

    int autos[3];
    autos[(int)chevrolet] = 10;
    autos[(int)ford] = 100;
    autos[(int)ferrari] = 1;

    //Declaracion de un Array y Asignacion
    //TipoDeDato IdentificadorDeDato  [TamañoDelArray];
    string alumnos[alumnosEnElAula]=
    {"Jaimito","Juan", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito","Jaimito",
    "Jaimito", "Jaimito", "Chester", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", 
    "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Pepe", "Maria", "Pedro"};

    //Los arreglos se recorren usando un for. El i acumulador y el tamaño del limite es el tamaño del array.
    for (int i = 0; i < alumnosEnElAula; i++)
    {
        cout << alumnos[i] << " ";
    }
    cout << endl;
    cout << endl;
    //Declaracion de un Array bidimencional y Asignacion
    //TipoDeDato IdentificadorDeDato  [AnchoDelArray][AltoDelArray];
    string alumnos2D[filasDeSillas][columnasDeSillas] =
    { {"Jaimito", "Juan", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito"},
      { "Jaimito", "Jaimito", "Chester", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito"},
      { "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Jaimito", "Pepe", "Maria", "Pedro"} };

    //Los arreglos bidimensionales se recorren usando fors
    for (int i = 0; i < filasDeSillas; i++)
    {
        for (int j = 0; j < columnasDeSillas; j++) {
            cout << alumnos2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    int map[ancho][alto];

    for (int i = 0; i < ancho; i++)
    {
        for (int j = 0; j < alto; j++) {
            map[ancho][alto] = 0;
        }
    }
    for (int i = 0; i < ancho; i++)
    {
        for (int j = 0; j < alto; j++) {
            cout << map[ancho][alto] << " ";
            Sleep(100);
        }
        cout << endl;
    }
}