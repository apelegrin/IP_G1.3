#include <iostream>
using namespace std;

int main () {
	int x, y, i, p;
	cout << "Introduce los valores x y para [2^x,2^y] ";
	cin >> x >> y; 
	p = 1;
	/*calcular todos los valores entre 2^x+1 y 2^y*/
	for (i = 1; i <= y; i++) {
		if (i>=x){
			cout << "2^" << i << "=" << p << endl;
		}
	}	
	return 0;
}





