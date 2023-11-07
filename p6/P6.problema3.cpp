
#include <iostream>
using namespace std;
int main()
{
	const int FDS = -1;
	int EA;
	int ant;
	int cont;
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
    cin >> EA; //Comenzar
    if (EA == FDS){
		//Trat. secuencia vacía
		cout << "La secuencia está vacía" << endl;
	}
	else {
		//Trat. primer elemento
		ant = EA;
		cont = 1;
		do { //ITERAR
		   //Avanzar
		   cin >> EA;
		if (EA == FDS){break;} //DETENER DFS
		   //Tratamiento EA
		   cout << EA+ant << ", ";
		   ant = EA;
		   cont = cont + 1;
		} while (true); //FIN_ITERAR   
		//Terminación trat.
		if (cont == 1){
			cout << "La secuencia está vacía" << endl;
		}
	}
	return 0;
}
