// Comentario: texto que no se tiene en cuenta durante la compilacion.

// #include: Che visual quiero usar x libreria.
#include <iostream> // Librerias: Conjuntos de herramientas compiladas que podemos usar.

// Input & Out Stream: Recibir y mandar informacion.

//Main: Es la funcion por la cual se empieza a ejecutar mi codigo.
//Funciones: Cacho codigo encerrado entre llaves. Seccion de codigo encerrada en un contexto propio.
int main()
{ //TipoDeCaja  NombreDeCaja
    int            vida; // Cree la caja 'vida'.
    vida = 15; // lleno la caja.
    int daño = 15;
    std::cout << "Tu vida es: " << vida << std::endl;
    std::cout << "Tu mana es: 10" << std::endl;

    vida -= daño;

    int n8239 = 23;

    std::cout << "Te pego un goblin, perdiste " << daño << " de vida, te quedan: " << vida << std::endl;
    //Si, pasa X entonces hace Y, pero si no pasa X hace Z
    //if(X->Condicion)
    //{
    //  Y -> Resultado
    //}
    //else
    //{
    //  Z -> Resultado opuesto
    //}
    if (vida <= 0)
    {
        std::cout << "La palmaste, hermano." << std::endl;
        if (daño >= 20)
        {
            std::cout << "Y te pego una bocha." << std::endl;
        }
    }
    else 
    {
        std::cout << "Safaste, hermano." << std::endl;
    }

    int numerosEnteros = 5;
    std::cout << numerosEnteros << std::endl;
    char letra = 'c';
    std::cout << letra << std::endl;
    float numeroConComa = 5.45f;
    std::cout << numeroConComa << std::endl;
    bool verdad = true;

}
