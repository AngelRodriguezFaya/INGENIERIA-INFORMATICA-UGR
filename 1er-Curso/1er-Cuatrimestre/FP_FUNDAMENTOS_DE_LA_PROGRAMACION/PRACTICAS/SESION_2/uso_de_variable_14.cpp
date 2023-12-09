/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 03/10/2022
////////////////////////////////////////////////////////////////////////////

/*
	Programa que a trav�s de la siguiente f�rmula, imprime el valor de pi.
*/


#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	const double PI = 6 * asin(0.5);
	
	cout << "\nEl valor de pi es: " << PI;
	
}

