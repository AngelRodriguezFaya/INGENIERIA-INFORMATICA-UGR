/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 05/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que nos calcula la tarifa final de un billete de avi�n, 
	estableci�ndo la tarifa base para vuelos de de 300kms o menos, o 
	en su defecto, sum�ndole 0.1 c�nts a la tarifa base por cada kil�metro
	recorrido a partir de los 301kms.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 4.TARIFA A�REA. \n\n";

	const float TRF_BASE = 150.0;
	const float RECARGO_KM = 0.1; 
	float recorrido;
	
	cout << "  Introduce la distancia a su destino (en kilometros): ";
	cin >> recorrido;
	
	bool dist = recorrido <=300;	
	
	if (dist){
		cout << "\n\t EL precio final del billete es: " << TRF_BASE;
	} else {
		cout << "\n\t El precio final del billete es: ";
		cout << TRF_BASE + ((dist - 300) * RECARGO_KM);
	}
	
}

