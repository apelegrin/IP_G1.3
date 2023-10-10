#include <iostream>
using namespace std;


void intercambio (char &a, char &b)
{
	char aux;
	aux = a;
	a = b;
	b = aux;
}

int main(){
	char dato1,dato2;
	
	cout << "Introduce 2 valores (a b) :";
	cin >> dato1 >> dato2;
	cout << "El valor de dato1 es " << dato1 << endl;
	cout << "El valor de dato2 es " << dato2 << endl;
	
	intercambio(dato1,dato2);
	
	cout << "El valor de dato1 es " << dato1 << endl;
	cout << "El valor de dato2 es " << dato2 << endl;
    return 0;
}

