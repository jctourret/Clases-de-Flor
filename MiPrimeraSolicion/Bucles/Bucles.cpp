#include <iostream>


using namespace std;
const int numeroDeVueltas = 5;

int main()
{
	string Frase = "Programar es divertido.";

	cout << "Cuantas veces queres que te salude?" << endl;

	int numeroCualquiera;
	int contarBucles= 0;

	cin >> numeroCualquiera;
	//Bucles:
	//For(){}
	//While(){}
	//Do{}While()

	//For: Por. Repeti este bucle hasta que X llegue a valer Y.

	//for(valiable,condicion,progreso)

	for (int i = 0; i < numeroCualquiera; i++)
	{
		cout << "Hola" << endl;
		contarBucles++;
	}
	cout << "El bucle se ejecuto:" << contarBucles << endl;

	//While: Mientras. Mientras que mi condicion se cumpla, me repito.

	bool inputInvalido = true;

	while (inputInvalido)
	{
		cout << "Por favor ingrese un numero entre 1-10" << endl;

		cin >> numeroCualquiera;

		if (numeroCualquiera >= 1 && numeroCualquiera <= 10)
		{

		}
		else
		{
			cout << "Su input esta mal. Por favor intente de nuevo." << endl;
		}
	}

	//Do while. Hace Mientras. Ejecuta por lo menos una vez el codigo y despues juzga si tiene que repetirse.

	do
	{
		cout << "Por favor ingrese un numero entre 11-20" << endl;

		cin >> numeroCualquiera;

		if (numeroCualquiera >= 11 && numeroCualquiera <= 20)
		{
			inputInvalido = false;
		}
		else
		{
			cout << "Su input esta mal. Por favor intente de nuevo." << endl;
		}
	} while (inputInvalido);
}