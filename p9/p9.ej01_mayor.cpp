#include <iostream>
using namespace std;
const int N = 20;
const int NFilas = N;/* constante con el número de filas */
const int NColumnas = N;/* constante con el número de columnas */

typedef int Matriz[NFilas][NColumnas]; /*Tipo tabla*/

void Leer_Tabla (Matriz &a, int nf, int nc) {
	int i;
	int j;
	for (i = 0; i < nf; i=i+1) {
		cout << endl << "Fila: " << i << endl;
		for (j = 0; j < nc; j=j+1) {
			cout << "Introduce el dato (" << i << ", " << j << "): ";
			cin >> a[i][j];
		}
	}
}



int main() {
	/*Suma de los valores mayores de cada fila de una matriz de enteros*/
	Matriz t;
	int nf, nc, i, j;
	int sm, mayor;
	cout << "*****" << endl;
	cout << "* Sumar valor mayor de cada fila *" << endl;
	cout << "* de una matriz de enteros *" << endl;
	cout << "*****" << endl;

	cout << "Introduce el número de filas (<= " << NFilas << "): ";
	cin >> nf;
	cout << endl;
	cout << "Introduce el número de columnas (<= " << NColumnas << "): ";
	cin >> nc;

	Leer_Tabla (t, nf, nc);

	/* Buscar el mayor*/
	sm = 0;
	for (i = 0; i < nf; i=i+1) { // asumir el primer ele como el mayor
		mayor = t[i][0];
		for (j = 1; j < nc; j=j+1) {
			if (mayor < t[i][j]) { 
					mayor = t[i][j]; }
			/* INV int: mayor = mayor de los j elementos ya recorridos de la fila i, 1 <= j <= nc */
		}
		sm = sm + mayor;
		/* INV ext: sm = suma de los mayores de las primeras i filas de T, 1 <= i <= nf */
	}
	/* INV ext: y (i = nf) => POST */
	
	cout << endl;
	cout << "La suma de los valores mayores de cada fila de";
	cout << "la matriz de enteros es: " << sm << endl;
	cout << endl;
	return 0;
}
