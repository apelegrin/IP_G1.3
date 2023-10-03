#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int nota;
	/*Algoritmo*/
	cout << "Introduce una calificación ";
    cin >> nota;
    if (nota == 20){
		cout << "M. De Honor";}
	else if ((nota == 19) || (nota == 18)){
		cout << "Sobresaliente";}
	else if ((nota == 17) || (nota == 16)){
		cout << "Notable";}
	else if ((nota == 15) || (nota == 14)){
		cout << "Aprobado";}
	else { /*En otro caso*/
		cout << "Aprobado";}
	
	cout << endl;
	return 0;
}
