#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	///Capitulo 8 Programa 8
	float C, F, K;
	cout << "Ingrese la temperatura a grados Kelvin a Fanrenheit: ";
	cin >> K;
	F = (K - 273.15) * (9) / 5 + 32;
	cout << "\n\tEl resultado final en Fanrenheit:\t " << F;

	C=(5.0 / 9.0)* (F - 32);;

	cout << "\n\tEl resultado final en Celcius:\t " << C;
}