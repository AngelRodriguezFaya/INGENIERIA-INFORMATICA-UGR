/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
////////////////////////////////////////////////////////////////////////////

/*
	Programa simple para el c�lculo del voltaje cprrespondiente mediante
	la Ley de Ohm
*/

#include <iostream>   
#include <cmath>      
using namespace std;

int main(){
	double intensidad;
	double resistencia;
	double voltaje;
	
	cout << "Introduzca el valor de la intensidad: ";
	cin >> intensidad;
	cout << "Introduzca el valor de la resistencia: ";
	cin >> resistencia;
	
	voltaje = intensidad*resistencia;

	cout << "\nEl voltaje es: " <<voltaje;

}
