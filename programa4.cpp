#include <math.h>
#include <iostream>
#define g 9.8
using namespace std;
int main()
{
	///Capitulo 8 programa 4
	int alt;
	float tiempo, D;
	cout << "\n\t Ingrese la altura donde cae:\t";
	cin >> alt;
	while (alt <= 0)
	{
		cout << "\n\tError. Digite la altura donddde cae:\t";
		cin >> alt;
	}
	tiempo = sqrt(2 * alt / g);
	cout << "\n\tEl tiempo es:\t" << tiempo;
	D = (g * tiempo * tiempo) / 2;
	cout << "\n\tLa distancia final es:\t " << D;

}