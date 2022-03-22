#include<iostream>
using namespace std;
int main(){
 float Peso,Mole,Elemento,Atomico;
 const double c=6.023e23;
	cout<<"Ingrese Peso Atomico:"<<endl;
	cin>>Peso;
	cout<<"Ingrese Peso del Elemento a calcular:"<<endl;
	cin>>Elemento
	Mole=Peso*(1.0/Elemento);
	cout<<"Moles: "<<Mole;
	Atomico=Mole*(c/1);

}