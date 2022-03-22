#include<iostream>
#include<conio.h>
#define valorpi 3.141516;
using namespace std;
void main() {
///Capitulo 8 Programa 1
	float angulorad, angsexag, auxiliar, auxiliar2;
	int grados, minutos, segundos;
	cout << "Ingrese el angulo en radianes:";
	cin >> angulorad;
	angsexag = angulorad * 180 / valorpi;
	grados = angsexag;
	auxiliar = (angsexag - grados) * 60;

	minutos = auxiliar;
	auxiliar2 = (auxiliar - minutos) * 60;
	segundos = auxiliar2;
	cout << "El angulo en grados sexagesimales es:";
	cout <<"grados: " <<grados << "minutos: " << minutos << " Segundos: " << segundos;
	_getch();
}