/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 28/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que intercambia el valor de dos variables sin que se sobreescriban
	o se "pisen" sus valores.
*/

#include <iostream>
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: INTERCAMBIO DE VARIABLES. \n\n";
	
	double drcha, izqda, valor_d;
	 
	cout << " Introduzca el valor de la caja derecha: ";
	cin >> drcha;
	cout << " Introduzca el valor de la caja izquierda: ";
	cin >> izqda;
	
	valor_d = drcha;
	drcha = izqda;
	izqda = valor_d;
	
}

