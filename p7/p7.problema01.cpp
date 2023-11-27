#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFichero (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<float>::iterator EA;	
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

void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;

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
	list<float> S;
	list<float>::iterator EA;
	float alumnosMenos40;
	float alumnos40y50;
	float alumnosMas50;
	float sumaPesos;
	float media;
	
	cargarFichero (S, "entrada7_1.txt");

	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin(); //Comenzar
	
	sumaPesos = 0;
	alumnosMenos40 = 0;
	alumnos40y50 = 0;
	alumnosMas50 = 0;
	
	while (EA != S.end() ) {
		if (*EA < 40){
			alumnosMenos40++;
		}
		else if (*EA < 50){
			alumnos40y50++;
		}
		else {
			alumnosMas50++;
		}
		sumaPesos = sumaPesos + *EA;
		EA++;
	}
	cout << "Alumnos de menos de 40 :" << alumnosMenos40 << endl;
	cout << "Alumnos entre  40 y 50 :" << alumnos40y50 << endl;
	cout << "Alumnos de mas   de 50 :" << alumnosMas50 << endl;
	//Calculamos la media
	media = sumaPesos / (alumnosMenos40 + alumnos40y50 + alumnosMas50);
	cout << "La media es :" << media << endl;
}









