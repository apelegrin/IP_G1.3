
#include <iostream>
using namespace std;
int main()
{
	const int MF=-100; //Marca de fin de secuencia
	int EA; // Elemento actual
	int cuadrado;
	cuadrado = 0;
	// Primer esquema de recorrido del primer modelo de acceso secuencial
    cout <<"Introduce una serie de números, para terminar [-100] "<<endl;
    cin >> EA; // Comenzar
    while (EA != MF) { // Condición de finalización
        // Tratamiento del EA
        cuadrado = EA * EA;
        cout << cuadrado << ","; // Registrar en la salida
        cin >> EA; // Avanzar
    }
    return 0;
}
