#include <iostream>
#include <iomanip>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int   Vector [N];
typedef float VectorFloat [N];

void calcularFrecRel(Vector n,float conta,VectorFloat &f){
	int i;
	for (i = 0; i < N; i=i+1) {
		f[i] = n[i] / conta;
	}
}

void imprimeTabla(Vector r,VectorFloat f){
	cout << setprecision(2);
	for (int i = 0; i < N; i=i+1) {
		cout << "Nota " << i << ":" << r[i] << " Frec Rel: " << f[i] << endl;
	}
	cout << endl;
}

int main () {
    Vector notas;
    VectorFloat frecu;
    float numEle;
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
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != MF){
			/* Procesado EA */
			if ((EA >=0) && (EA <=10)){ //Si la calif es válida la anotamos
				notas[EA] = notas[EA] + 1;
				numEle = numEle + 1;
			}
			/* Avanzar */
			cin >> EA;
		}
		/* Tratamiento Posterior */
		calcularFrecRel(notas,numEle,frecu);
		imprimeTabla(notas,frecu);
	}
}






