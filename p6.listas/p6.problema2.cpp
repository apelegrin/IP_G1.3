#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFicheroInt (list<int> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<int>::iterator EA;	
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}
		f << endl;
		f.close();
	}
}

void cargarFicheroInt (list<int> &S, string nombre) {
	ifstream f;
	int dato;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {	
		S.clear ();
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main()
{
	list<int> S, R;
	list<int>::iterator EA;
	int sumaPrevios;
	cargarFicheroInt (S, "entrada2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin(); //Comenzar
	sumaPrevios = 0;
	while (EA != S.end()) {
		//Tratamiento EA
		R.push_back(*EA+sumaPrevios);
		sumaPrevios = sumaPrevios + *EA;
		//Avanzar
		EA++;
	}
	guardarFicheroInt (R, "salida2.txt");
	cout << "Terminado" << endl;
}

