#include <iostream>
using namespace std;

struct Fecha {
	int d;
	int m;
	int a;
};

int main() {
	/*Lexico*/
	Fecha fechaEntrada;
	Fecha fechaSalida;

	int ddFinMes;
	/*Algoritmo*/
    cout << "Introduce la fecha dd mm aaaa    > ";
    cin >> fechaEntrada.d >> fechaEntrada.m >> fechaEntrada.a;
    
    if ((fechaEntrada.m==4)||(fechaEntrada.m==6)||(fechaEntrada.m==9)||(fechaEntrada.m==11)){
		ddFinMes = 30;}
	else if (fechaEntrada.m==2){
		ddFinMes = 28;}
	else {/*en cualquier otro caso*/
			ddFinMes = 31;}
			
	/*Caso normal no es fin de mes*/
	if (fechaEntrada.d < ddFinMes){
		fechaSalida.d = fechaEntrada.d+1;
		fechaSalida.m = fechaEntrada.m;
		fechaSalida.a = fechaEntrada.a;
	}
	else if (fechaEntrada.m != 12){
		/*Es fin de mes pero no de año*/
		fechaSalida.d = 1;
		fechaSalida.m = fechaEntrada.m+1;
		fechaSalida.a = fechaEntrada.a;
	}
	else{
		fechaSalida.d = 1;
		fechaSalida.m = 1;
		fechaSalida.a = fechaEntrada.a+1;
	}
	cout << "Dia siguiente "<<fechaSalida.d<<" "
		 <<fechaSalida.m<<" "<<fechaSalida.a<<endl;
}

