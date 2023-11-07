
#include <iostream>
using namespace std;
bool imprime(){
	cout << "HOLA "; 
	return true;
}

int main()
{
	const int FDS = -100;
	int EA;

	//Comenzar
	cin >> EA;
	while ((EA!=FDS) & ((EA % 2)!=0) & (imprime()) ){ //MIENTRAS NO FDS
		//cout << EA << ", ";
		cin >> EA; //Avanzar
	}	
	//Insertar marcha fin
	cout << endl;
	return 0;
}
