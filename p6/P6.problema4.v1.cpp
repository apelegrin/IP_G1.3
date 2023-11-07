
#include <iostream>
using namespace std;
int main()
{
	const int FDS = -100;
	int EA;
	int encontrado;
	encontrado = 1;
	//Comenzar
	cin >> EA;
	encontrado = EA % 2; //Resto división si 0 es par
	while ((EA!=FDS) && (encontrado!=0)){ //MIENTRAS NO FDS
		cout << EA << ", ";
		cin >> EA; //Avanzar
		encontrado = EA % 2; // 2
	}	
	//Insertar marcha fin
	cout << endl;
	return 0;
}
