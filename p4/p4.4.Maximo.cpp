#include <iostream>
using namespace std;

int Max2 (int a, int b)
{
	int mayor;
	if (a > b) {
		mayor = a; }
	else {
	mayor = b; }
	
	return mayor;
}

int Max3 (int a, int b, int c)
{
	int mayor;
	
	mayor = Max2(a,b);
	return Max2(mayor,c);
}

int main(){
	int d1,d2,d3;
	
	cout << "Introduce tres numeros :";
	cin >> d1 >> d2 >> d3;
	
	cout << "El mayor es " << Max3(d1,d2,d3) << endl;
    return 0;
}

