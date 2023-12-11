#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <list>

using namespace std;
const int N = 11;
typedef int   Vector [N];

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

int hayMayor50(Vector r,float numEle){
	int i;
	int resultado;
	resultado  = -1;
	i = 0;
	//Mientras no alcanzamos el fin de la tabla
	//O no encontramos el valor buscado
	//Iteramos
	while ( (i < N) && ( (r[i]/numEle) < 0.5 ) ){
		i = i + 1;
	}
	/* Motivo de fin de la iteración, fin de Tabla */
	if (i != N){
		resultado = i;
	}
	return resultado;
}

void imprimeTabla(Vector r, float numEle){
	cout << setprecision(2);
	for (int i = 0; i < N; i=i+1) {
		cout << "Nota " << i << ":" << r[i] << " Frec Rel: " << (r[i]/numEle*100) << "%" << endl;
	}
	cout << endl;
}

int main () {
	list<int> S;
	list<int>::iterator EA;
    Vector notas;
    float numEle;
    int i;
    /* Inicializamos la tabla de frecuencias */
    for (i=0;i < N;i=i+1){
		notas[i] = 0;
	}	
    cout << "Leyendo fichero " << endl;
    /* Cargamos los datos del fichero en la secuencia */
    cargarFichero(S,"notas.txt");
    numEle = 0;
    EA = S.begin(); //Comenzar
    if (EA == S.end()){
		/* Tratamiento SF */
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != S.end()){
			/* Procesado EA */
			if ((*EA >=0) && (*EA <=10)){ //Si la calif es válida la anotamos
				notas[*EA] = notas[*EA] + 1;
				numEle = numEle + 1;
			}
			/* Avanzar */
			EA++;
		}
		/* Tratamiento Posterior */
		imprimeTabla(notas,numEle);
		cout << "Buscando mayor = " << hayMayor50(notas,numEle) << endl;
	}
}






