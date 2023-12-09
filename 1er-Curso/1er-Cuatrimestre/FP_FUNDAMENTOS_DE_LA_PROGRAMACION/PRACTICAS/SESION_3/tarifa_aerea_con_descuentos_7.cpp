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
	estableci�ndo para ello el ejercicio 4 de esta misma relaci�n y 
	a�adi�ndole una serie de descuentos m�s.
*/

#include iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 7.TARIFA A�REA CON DESCUENTOS \n\n";
	
	// Aqu� est�n definidas las constantes, ordenadas seg�n se van utilizando.
	const float TRF_BASE = 150.0;
	const float RECARGO_KM = 0.1;
	const float DTO_700_KMS = 0.02; 
	const float DTO_100_PUNTOS = 0.03;
	const float DTO_200_PUNTOS = 0.04;

	// Aqu� est�n definidas las variables, ordenadas seg�n se van utilizando.	
	float dist = 0; 
	float ptos = 0;
	float recar_300 = 0;
	float precio = 0; 
	float dto_700 = 0;
	float precio_fin = 0;

	//INTRODUCCI�N DE DATOS.
	
	cout << "  Introduzca la distancia a su destino (en kilometros): ";
	cin >> dist;
	cout << "  Introduzca el n�mero de puntos que tiene: ";
	cin >> ptos;
	
	//DESCUENTOS DE KIL�METROS.

	if (dist <=300){
		precio = TRF_BASE;
	} else {
		recar_300 = TRF_BASE + ((dist - 300) * RECARGO_KM);
		precio = recar_300;
		if (dist > 700){
			dto_700 = recar_300 - (recar_300 * DTO_700_KMS);
			precio = dto_700;
		}
	}
	
	//DESCUENTOS DE PUNTOS.
	

	if (ptos <=100){       //Preguntar si esta parte se puede poner c�mo SWITCH
		precio_fin = precio;
	}
	
	if (ptos > 100){
		precio_fin = precio - (precio * DTO_100_PUNTOS);
	}
	
	if (ptos > 200){
		precio_fin = precio - (precio * DTO_200_PUNTOS); 	
	}
		
	cout << "\n\t El precio final de su billete es: " << precio_fin;
	cout << endl;
}

