#include <iostream>
using namespace std;

int main() {
	int dividendo, divisor; 
	int cociente, resto;
	
	cociente = 0;
	resto = 0;
	cout << "Introduce el dividendo y divisor ";
	cin >> dividendo >> divisor;
	resto = dividendo;
	while (resto >= divisor) // fin de línea de la entrada de datos
	{
		resto = resto - divisor;
		cociente++;
	};
	cout << dividendo << " / " << divisor << " = " << cociente << endl;	
	cout << "Resto es = " << resto << endl;
}
