#include <iostream>
#include "secuencias.cpp"

using namespace std;
int main()
{
	list<float> S;
	list<float>::iterator EA;
	int cont;
	
	cargarFichero (S, "entrada3.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin(); //Comenzar
	cont = 0;
	while (EA != S.end()) {
		//Tratamiento
		cout << *EA << endl;
		if (*EA >= 5.0){
			cont++;
		}
		//Avanzar
		EA++; 
	}
	cout << "El número de aprobados es: " << cont << endl;
}

