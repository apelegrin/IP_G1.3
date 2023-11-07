
#include <iostream>
using namespace std;
int main()
{
	const float MF=-1; //Marca de fin de secuencia
	float EA; // Elemento actual
	float contador;
	contador = 0;
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	// No trata diferenciado sec. vacía
	// No trata diferenciado primer elemento
	
    cout <<"Introduce una serie de calificaciones, para terminar [-1] "<<endl;
    cin >> EA; // Comenzar
    while (EA != MF) { // Condición de finalización
        // Tratamiento del EA
        if (EA >= 5.0){
			contador = contador + 1;
		}
        cin >> EA; // Avanzar
    }
    cout << "El número de aprobados es: " << contador << endl;
    return 0;
}
