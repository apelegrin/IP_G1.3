#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFichero (list<int> S, string nombre) {
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

void cargarFichero (list<int> &S, string nombre) {
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
	list<int>::iterator EA_S;
	int anterior;
	int conta;
	cargarFichero (S, "entrada7_2.txt");

	//Comenzar;
	EA_S = S.begin();
	if (EA_S == S.end()) {
		//{Tratamiento sec. vacía }
		cout << " Secuencia vacía " << endl;
	} else {
		//{ Tratamiento 1er elemto. }
		anterior = *EA_S;
		conta = 1;
		do { //ITERAR
			EA_S++; //Avanzar
			if (EA_S == S.end()) { break; } //DETENER FDS;
			//{ Tratamiento de EA }
			R.push_back(*EA_S + anterior);
			anterior = *EA_S;
			conta++;
		}while (true); //FIN_ITERAR;
		//{ Terminación del tratto. }
		guardarFichero(R,"salida7_2.txt");
		cout << "Terminado " << endl;
		if (conta == 1){
			cout << " Secuencia vacía " << endl;
		}
	} //FIN_SEGÚN;
}









