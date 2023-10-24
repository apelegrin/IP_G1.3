#include <iostream>
using namespace std;

int main() {
	int an, ant1, ant2, ant3;//ant1 =>an-1 y ant3=>an-3
	int n,m;
	cout << "Introduce un m para calcular a(n) < m ";
	cin >> m;
	an=0;
	n=0;
	ant1=0;
	ant2=0;
	ant3=0;
	//i RECORRIENDO [a, b] HACER
	while(!(an > m)){
		//calcular a(n)
		if (n==0){
			an = 1;}
		else if (n==1){
			an = 2;}
		else if (n==2){
			an = 3;}
		else {
			an = 3*ant1 - 2*ant3;}
		cout << "a(" << n << ")=" << an << endl;	
		//me quedo con los 3 últimos
		ant3 = ant2;
		ant2 = ant1;
		ant1 = an;
		n++;
    }
    cout << "El valor de n buscado es " << n-1 << endl;
}





