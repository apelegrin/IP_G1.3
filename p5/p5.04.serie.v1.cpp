#include <iostream>
using namespace std;

int main() {
	int an, ant1, ant2, ant3;//ant1 =>an-1 y ant3=>an-3
	int n;
	int i;
	
	cout << "Introduce un n para calcular a(n) >";
	cin >> n;
	an=0;
	ant1=0;
	ant2=0;
	ant3=0;
	//i RECORRIENDO [a, b] HACER
	for (i=0; i<=n ;i++){
		//calcular a(n)
		if (i==0){
			an = 1;}
		else if (i==1){
			an = 2;}
		else if (i==2){
			an = 3;}
		else {
			an = 3*ant1 - 2*ant3;}
		cout << "a(" << i << ")=" << an << endl;	
		//me quedo con los 3 últimos
		ant3 = ant2;
		ant2 = ant1;
		ant1 = an;
    }
}





