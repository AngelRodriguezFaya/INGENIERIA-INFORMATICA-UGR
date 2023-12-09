/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 23/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que redondea un n�mero real a cualquier cifra decimal.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;																	
																							
int main(){																				
																				
	double num_real;	//Declarar las variables
	double n;
	double redon_real;
	
	cout << " Introduzca el n�mero real que desee redondear:  ";
	cin >> num_real;
	cout << " Introduzca el n�mero de cifra decimal a la que desea redondear: ";
	cin >> n;
	
	redon_real = (round(num_real*pow(10, n))/ pow(10, n));

	cout << "\n\tEl resultado de redondear " << num_real << " a la " << n;
	cout << "� cifra decimal es: " << redon_real;
	
}
