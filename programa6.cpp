#include<iostream>
using namespace std;
int main() {
float F, C, K, Ra;
	for (int a = 0; a <=30; a++)
	{
		cout << "Ingrese las temperaturas en Fahrenheit: ";
		cin >> F;
		K = (F - 32) * (5.0 / 9.0) + 273.15;
		cout << "Fahrenheit a  Kelvin: " << K << endl;
		C = (5.0 / 9.0) * (F - 32);
		cout << "Fahrenheit a Celsius: " << C << endl;
		Ra = F + 459.67;

		cout << "Fahrenheit a Rankie: " << Ra << endl;

	}
}
