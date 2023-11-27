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

bool esPar(int p){
	bool resultado;
	if ((p % 2) == 0){
		resultado = true;
	} else {
		resultado = false;
	}
	return resultado;
}

int main()
{
	list<int> S;
	list<int>::iterator EA;
	
	cargarFichero (S, "entrada7_3.txt");

	//Comenzar
	EA = S.begin();
	//MIENTRAS NO FDS Y DESPUÉS NO Pro(EA) HACER
	while ( (EA != S.end()) && (!esPar(*EA)) ){
		// TTos. para mantener el invariante
		//Avanzar
		EA++;
	} //FIN_MIENTRAS;
	
	if(EA == S.end()){
		cout << "No encontrado " << endl;
	}
	else {
		cout << "Encontrado el número " << *EA << " par" << endl;
	}
}









