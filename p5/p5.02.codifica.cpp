#include <iostream>
using namespace std;

void identifica(char c, int &conta){
	cout << "[" << c << "]";
	if ((c >= 'a') && (c <= 'z')) {
		cout << " Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << " Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << " Es un digito" << endl; }
	if (c == ' ') {	
		cout << " Es un blanco" << endl; conta++;}
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << " Es un signo de puntuación" << endl; }
	else { /*en otro caso*/
		cout << " Carácter desconocido" << endl; }
}

int main() {
	int cont; // contador de blancos
	char c; // carácter actual
	
	cont = 0;
	cout << "Introduce una línea ";
	cin.get(c);
	while (c != '\n') // fin de línea de la entrada de datos
	{
		identifica(c,cont);
		cin.get(c);
	};
	cout << "El número de blancos es: " << cont << endl;	
}
