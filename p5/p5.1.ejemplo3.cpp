#include <iostream>
using namespace std;

int main () {
	int x, y, i, p;
	cout << "Introduce los valores x y para [2^x,2^y] ";
	cin >> x >> y;
	p = 1;
	/* calcular 2^x*/
	for (i = 1; i <= x; i++) {
		p = p*2;
	}
	cout << "2^" << x << "=" << p << endl;
	/*calcular todos los valores entre 2^x+1 y 2^y*/
	for (i = x+1; i <= y; i++) {
		p = p*2;
		cout << "2^" << i << "=" << p << endl;
	}	
	return 0;
}





