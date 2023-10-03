#include <iostream>
using namespace std;
int main() {
	/*Lexico*/
	int ddEntrada, mmEntrada, aaEntrada;
	int ddSalida, mmSalida, aaSalida;
	int ddFinMes;
	/*Algoritmo*/
    cout << "Introduce la fecha dd mm aaaa    > ";
    cin >> ddEntrada >> mmEntrada >> aaEntrada;
    
    if ((mmEntrada==4)||(mmEntrada==6)||(mmEntrada==9)||(mmEntrada==11)){
		ddFinMes = 30;}
	else if (mmEntrada==2){
		ddFinMes = 29;}
	else {/*en cualquier otro caso*/
			ddFinMes = 31;}
			
	/*Caso normal no es fin de mes*/
	if (ddEntrada < ddFinMes){
		ddSalida = ddEntrada+1;
		mmSalida = mmEntrada;
		aaSalida = aaEntrada;
	}
	else if (mmEntrada != 12){
		/*Es fin de mes pero no de año*/
		ddSalida = 1;
		mmSalida = mmEntrada+1;
		aaSalida = aaEntrada;
	}
	else{
		ddSalida = 1;
		mmSalida = 1;
		aaSalida = aaEntrada+1;
	}
	cout << "Dia siguiente "<<ddSalida<<" "<<mmSalida<<" "<<aaSalida<<endl;
}
















