/*
 * Problema del c�lculo de la media aritm�tica de
 * una secuencia de n�meros reales.
 * Resuelto con el 2� Modelo de acceso secuencial,
 * Esquema 2:
 * NO H1 : La secuencia vac�a se trata de forma distinta del resto.
 * H2 : El primer elemento se trata igual que el resto.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void Cargar_Fichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;
	
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
		}
	else {
		S.clear (); // Crear (S);
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_front (dato); // Registrar (S, dato), en el 2� MAS es por el principio
		}
		f.close();
	}
}

int main()
{
	list<float> S;
	list<float>::iterator EA_S;
	int num;
	float suma, media;
	
	Cargar_Fichero (S, "entrada.txt");
	
	EA_S = S.end(); // Iniciar (S)
	if (EA_S == S.begin ()) { // SI EsVac�a (S) ENTONCES
		cout << "La secuencia es vac�a" << endl;
	}
	else {
		num = 0;
		suma = 0.0;
		do { // REPETIR
			EA_S--;	// Avanzar (S);
			num = num + 1;
			suma = suma + *EA_S; // suma <-- suma + EA(S)
		} while (EA_S != S.begin()); // HASTA Es�ltimo (S)
		media = suma / num;
		cout << "La media es: " << media << endl;
	}
	return 0;
}






