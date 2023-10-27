#include <iostream>

using namespace std;

int main()
{   //Es una cadena de variables una al lado de la otra.
	//TipoDeDato nombreDeVariable[tamaño] = {variable, variable, variable, etc}  
	char map[100] = { 'c','a','s','i','t','a' };

	//imprimi mi array;
	cout << map << endl;

	//imprimi el primer espacio de mi array.
	cout << map[0] << endl;

	for (int i = 0; i < 100; i++)
	{
		map[i] = ' ';
	}
	getchar();

	for (int i = 0; i < 100; i++)
	{
		wcout << map[i];
	}
	cout << endl;

	//╔════════╗
	//╠═══╦════╣
	//║   ║    ║
	//╠═══╬════╣
	//╚═══╩════╝
}