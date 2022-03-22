#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	///Capitulo 8 Programa 7
	float C, F;
	cout << "Ingrese la temperatura a grados Celcius a Fahrenheit:";
	cin >> C;
	F = (9.0 * C) / 5.0 + 32;
	cout << "El resultado a Fahrenheit: " << F;
}