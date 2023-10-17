#include <iostream>
using namespace std;

int main () {
	int cont; // contador de blancos
	char c; // carácter actual
	
	cont = 0;
	cout << "Introduce una línea ";
	/*
	cin.get(c);
	while (c != '\n') // fin de línea de la entrada de datos
	{
		if (c == ' ') {
			cont = cont + 1;
		}
		cin.get(c);
	};
	*/
	do {
		cin.get(c);
		if (c == ' ') {
			cont = cont + 1;
		}
	}while (c != '\n');
	
	cout << "El número de blancos es: " << cont << endl;
}




