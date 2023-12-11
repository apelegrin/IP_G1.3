#include <iostream>
#include <iomanip>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int   Vector [N];

int hayMayor50(Vector r,float numEle){
	int i;
	int resultado;
	resultado  = -1;
	i = 0;
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
    Vector notas;
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
		imprimeTabla(notas,numEle);
		cout << "Buscando mayor = " << hayMayor50(notas,numEle) << endl;
	}
}






