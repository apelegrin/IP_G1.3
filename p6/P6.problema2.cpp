
#include <iostream>
using namespace std;
int main()
{
	const int FDS = -1;
	int EA;
	int suma;
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
    cin >> EA; //Comenzar
    suma = 0;
    while (EA != FDS){
		//Tratamiento
		suma = suma + EA;
		cout << suma << ", ";
		//Avanzar
		cin >> EA;
	}
	return 0;
}
