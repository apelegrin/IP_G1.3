#include <iostream>
using namespace std;
int main() {
	/*Lexico*/
	int periodo; /* de 1 a 24 meses */
	float cantidadPrestada, interesMensual, interes;
	float capitalDevolver,cuotaMensual;
	char clienteRiesgo;
	/*Algoritmo*/
    cout << "Introduce la cantidad prestada    > ";
    cin >> cantidadPrestada;
    cout << "Introduce el interés mensual      > ";
    cin >> interesMensual;
    cout << "Introduce el periodo (1-24 meses) > ";
    cin >> periodo;
    cout << "¿Es cliente de riesgo (s/S)       ? > ";
    cin >> clienteRiesgo;
    interes = periodo * interesMensual / 100;
    capitalDevolver = cantidadPrestada * (1.0 + interes);
    if ((clienteRiesgo=='s') || (clienteRiesgo=='S')){
		capitalDevolver = capitalDevolver * 1.01; }
    cuotaMensual = capitalDevolver / periodo;
    cout << "La cuota mensual es de > " << cuotaMensual << endl;
}
















