#include <iostream>
using namespace std;


void binDec (int b3, int b2, int b1, int b0, int &dec)
{
	dec = b0*1 + b1*2 + b2*4 + b3*8;
}

int main(){
	int miB0,miB1,miB2,miB3;
	int decimal;
	cout << "Introduce un nº en binario (b3 b2 b1 b0)";
	cin >>miB3>>miB2>>miB1>>miB0;
	binDec(miB3,miB2,miB1,miB0,decimal);
	cout << "El valor decimal es " << decimal << endl;
    return 0;
}

