#include <iostream>
using namespace std;
int main() {
	/*Lexico*/
	char PermisoConducir;
	/*Algoritmo*/
	cout << "Introduzca el tipo de licencia: ";
	cin >> PermisoConducir;
	switch (PermisoConducir) {
		case 'A':
			cout << "Motocicletas y triciclos de motor";
			break;
		case 'B' :
			cout << "Automóviles masa máxima autorizada <= 3500 kg";
			break;
		case 'C' :
			cout << " Automóviles masa máxima autorizada > 3500 kg ";
			break;
		default : /*en otro caso*/
			cout << "No contemplado";
		break;
	}
	cout << endl;
	/*Segun*/
	if (PermisoConducir == 'A'){
		cout << "Motocicletas y triciclos de motor";}
	else if (PermisoConducir == 'B'){
		cout << "Automóviles masa máxima autorizada <= 3500 kg";}
	else if (PermisoConducir == 'C'){	
		cout << " Automóviles masa máxima autorizada > 3500 kg ";}
	else { /*en otro caso*/
		cout << "No contemplado";}
	cout << endl;
	return 0;
}
















