
#include <iostream>
using namespace std;
int main()
{
	const int MF = -1;
	int EA;
	int cont;
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
	//Comenzar
	cin >> EA;
	cont = 0;
	while (EA != MF) {
		//Tratamiento
		cout << EA << ", ";
		cont = cont + 1;
		//Avanzar
		cin >> EA;
	}
	cout << endl << "El número de datos	recogidos es: " << cont << endl;
	return 0;
}
