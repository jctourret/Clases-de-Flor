#include <iostream>

//enum: Crear un tipo de dato enumarado.
//enum: Los enumeradores nos permiten cambiar numeros por palabras.
//Mejorando la legibilidad de nuestro codigo.
enum Mano {
    Piedra = 1,
    Papel,
    Tijeras
};

enum Estado
{
    Idle,
    Agresivo,
    Asustado
};

enum Menus {
    Juego,
    Opciones,
    Salir
};

enum Armadura {
    Cuero,
    Hierro,
    Acero
};

int main()
{
    Mano manoActual; // Creamos una caja de un tipo de dato
                      // que no existe en la programacion.
    
    Armadura armaduraActual;

    Estado estadoDelEnemigo;

    Menus menuActual;

    int input;

    std::cout << "Ingrese que desea hacer:" << std::endl << std::endl;

    std::cout << "1) Jugar" << std::endl;
    std::cout << "2) Opciones" << std::endl;
    std::cout << "3) Salir" << std::endl;

    //Switch ()

    std::cout << "Ingrese Piedra, Papel o tijeras:" << std::endl << std::endl;

    std::cout << "1) Piedra" << std::endl;
    std::cout << "2) Papel" << std::endl;
    std::cout << "3) Tijeras" << std::endl;

    std::cin >> input;

    manoActual = (Mano)input; // Casteo: Transformar un tipo de dato
                               // a otro. numero = (int)numeroDecimal; 

    if (input == 1) //Numeros magicos: Son todos los numeros que
                    //estan ahi por que al programador se le canto
    {
        std::cout << "Usted eligio Piedra." << std::endl;
    }
    else
    {
        std::cout << "Algo salio mal." << std::endl;
    }

    // Switch: se basa en casos, que son posibles valores de una misma variable.
    // Maquina de estados: Es codigo que dependiendo de una
    // variable se comporta de forma distinta.
    //Switch(variable)
    switch (manoActual)
    {
    case Piedra:
        std::cout << "Usted eligio Piedra." << std::endl;
        //PC = Piedra -> Empatado
        //PC = Papel -> Perdido
        //PC = Tijeras -> Ganado
        break; // Break: Hay que escribirlo despues de cada caso. Marca el punto donde el caso se termina
    case Papel:
        std::cout << "Usted eligio Papel." << std::endl;
        
        //PC = Papel -> Perdido
        //PC = Tijeras -> Ganado

        break;
    case Tijeras:
        std::cout << "Usted eligio Tijera." << std::endl;
        break;
    default:
        std::cout << "Algo salio mal." << std::endl;
        break;
    }
}