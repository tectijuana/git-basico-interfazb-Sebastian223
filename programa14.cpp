#include<iostream>
#include<math.h>

const float velocidadluz = 2.9977925e8;
float main()
{
	////Capitulo 8 Ejercicio 14
	std::cout << " Ingresa la masa en KG:";
	float masa;
	std::cin >> masa;
	if (masa <= 0)
	{
		std::cout << "Error,Ingrese valores positivos" ;
		return 0;
	}
	float E;
	E = masa * pow(velocidadluz, 2);
	std::cout << "La energia producida es: " << E << '\n';