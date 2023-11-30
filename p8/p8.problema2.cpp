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
    cout << "Introduce calificaciones, (fin -1) " << endl;
    cin >> EA;
    numEle = 0;
    if (EA == MF){
		/* Tratamiento SF */
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != MF){
			/* Procesado EA */
			notas[EA] = notas[EA] + 1;
			numEle = numEle + 1;
			/* Avanzar */
			cin >> EA;
		}
		/* Tratamiento Posterior */
		imprimeTabla(notas);
	}
}






