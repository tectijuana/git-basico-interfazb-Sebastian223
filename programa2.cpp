#include<iostream>
#include<math.h>
const float velocidadluz = 2.9977925e8;
float main() {
	///Capitulo 8 programa 2
	float D, Seg;
	Seg = 86400;
	std::cout << "\n Distancia que recorre un ano a velocidad luz";
	std::cout << "\nIngresa la cantidad en dias que deseas calcular en anos:";
	float dias;
	std::cin >> dias;
	D = Seg * velocidadluz * dias;
	std::cout << "La distancia final es: " << D << '\n';


}