#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

void imprimeTabla(Vector r){
	for (int i = 0; i < N; i=i+1) {
		cout << "Nota " << i << ":" << r[i] << endl;
	}
	cout << endl;
}

int main () {
    Vector notas;
    int numEle;
    int EA;
    int i;
    /* Inicializamos la tabla de frecuencias */
    for (i=0;i < N;i=i+1){
		notas[i] = 0;
	}	
    cout << "Introduce calificaciones, (fin -1) " << endl;
    cin >> EA;
    numEle = 0;
    if (EA == MF){
		/* Tratamiento SF */
		cout << "Secuencia vac�a" << endl;
	}else{
		while (EA != MF){
			/* Procesado EA */
			if ((EA >=0) && (EA <=10)){ //Si la calif es v�lida la anotamos
				notas[EA] = notas[EA] + 1;
				numEle = numEle + 1;
			}
			/* Avanzar */
			cin >> EA;
		}
		/* Tratamiento Posterior */
		imprimeTabla(notas);
	}
}






