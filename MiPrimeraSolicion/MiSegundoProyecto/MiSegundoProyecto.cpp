// #include: incluime la libreria X
// Libreria: Set de herramientas extras.
#include <iostream> //Libreria: Input and Output Stream

//namespace: 
//std: Subcarpeta de iostream donde esta cout.

// '//' -> Comentarios.
int main() //main -> Punto de entrada. Funciones: Cachos de codigo.
{   // {} -> Comenzar y terminar contextos.
    // ;  -> Termino la instruccion dentro del contexto, pasa a la siguiente.

    //Contenedor con identificador que permite guardar un dato que se ubica en una parte especifica de la memoria.
    //Jarra con etiqueta que guarda datos de un tipo especifico que esta guardada en algun lado.
    //Caja con etiqueta que guarda cosas especificas que esta guardada en algun lado.

    //Tipos de cajas  +  nombre de la caja;
    //Tipos de datos  +  identificador.
          int                numeros;    // Declaracion: Creando la caja.

    numeros = 8; // Llenando la caja
    
    numeros = numeros + 8; // +: operador aritmetico.
    numeros = numeros - 8; // -: operador aritmetico.
    numeros = numeros * 8; // *: operador aritmetico.
    numeros = numeros / 8; // /: operador aritmetico.

    numeros += 8; // +=: operador aritmetico y asignativo.
    numeros -= 8; // -=: operador aritmetico y asignativo.
    numeros *= 8; // *=: operador aritmetico y asignativo.
    numeros /= 8; // /=: operador aritmetico y asignativo.

    numeros = 9; // Llenando la caja

    numeros == 8; // ==: operador de comparacion. true/false
    numeros != 8; // !=: operador de comparacion. 
    numeros <= 9; // <=: operador de comparacion. 
    numeros < 9;  // <: operador de comparacion. 
    numeros >= 9; // >=: operador de comparacion. 
    numeros > 9;  // >: operador de comparacion. 

    bool condicion; 

    condicion = numeros == 8; // verdad se va a llenar con un falso.

    char letras = 'c';

    float numerosDecimales = 5.45f;

    numeros = (int)numerosDecimales;

    //Estructura de control: operadores o palabras reservadas que nos
    //permiten manipular como se ejecuta nuestro codigo.
 
    //if   = Si pasa esto vas a tener este resultado.
    //else = si no pasa esto vas a tener este otro resultado.

    //si vida <= 0 vas a estar muerto.
    int vida = 5;

    if(vida <= 0)
    {
        std::cout << "Moriste" << std::endl; // <<: Operador que marca mensaje a 
    }
    else
    {
        std::cout << "Vivis" << std::endl; // -> "":Escribir frases o palabras.
    }


    //else if: Permite poner condiciones adicionales al if/else y concatenarlo indefinidamente.
    int vidasExtras = 3;
    if (vida <= 0)
    {
        std::cout << "Moriste" << std::endl; // <<: Operador que marca mensaje a 
    }
    else if (vidasExtras > 0)
    {
        std::cout << "Moriste pero revivis" << std::endl; // -> "":Escribir frases o palabras.
    }
    else {
        std::cout << "Vivis" << std::endl; // -> "":Escribir frases o palabras.
    }
    // &&: 'y' Significa que cuando ambos valores sean ciertos la condicion va a ser verdadera.
    
    vidasExtras = 0;

    if (vida <= 0 && vidasExtras > 0)
    {
        std::cout << "Moriste pero revivis" << std::endl; // <<: Operador que marca mensaje a 
    }
    else {
        std::cout << "Moriste" << std::endl; // -> "":Escribir frases o palabras.
    }

    int input;

    std::cout << "Ingresar un numero entre 1-10:" << std::endl;

    std::cin >> input;

    std::cout << "Usted ingreso: " << input << std::endl;

    std::cin.get();

    //Utilizando variables e if hacer una novela de texto corta de elegui tu propia aventura.
    //Tres deciciones con deciciones ternarias.

    // 1 y 2 -> (3 y 4) ( 5 y 6) -> (7 y 8) (9 y 10) (11 y 12) (13 y 14)
}