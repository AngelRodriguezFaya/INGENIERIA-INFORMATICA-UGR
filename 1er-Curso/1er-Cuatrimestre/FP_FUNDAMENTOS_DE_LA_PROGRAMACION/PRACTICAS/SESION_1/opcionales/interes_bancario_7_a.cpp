/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 28/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que calcula el inter�s bancario a traves de una f�rmula d�ndole
	los valores del capital y el inter�s.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;																	
																							
int main(){																				
																				
	double capi;	//Declarar las variables
	double inter;
	double total;
	
	cout << " Introduzca su capital:  ";
	cin >> capi;
	cout << " Introduzca el inter�s(sin el signo de %): ";
	cin >> inter;
	
	total = capi+capi*(inter/100);
	
	cout << "\n\tEl total es: " << total;
	
}
