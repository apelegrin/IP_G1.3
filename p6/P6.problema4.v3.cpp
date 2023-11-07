
#include <iostream>
using namespace std;
int main()
{
	const int FDS = -100;
	int EA;

	//Comenzar
	cin >> EA;
	while ((EA!=FDS) && ((EA % 2)!=0)){ //MIENTRAS NO FDS
		cin >> EA; //Avanzar
	}	
	//Fin del bucle ???
	if (EA == FDS){
		cout << "Elemento no encontrado " << endl;
	}
	else{
		cout << "Encontrado el número :" << EA << endl;
	
	}
	return 0;
}
