/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 28/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que calcula el inter�s bancario a traves de una f�rmula (distinta 
	a la de a) d�ndole los valores del capital y el inter�s.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double capi;
	double inter;
	
	cout << "Introduzca su capital: ";
	cin >> capi;
	cout << "Introduzca el interes (en % y sin el signo): ";
	cin >> inter;
	
	capi = capi+capi*(inter/100);
	
	cout << "\n\tEl total es: " << capi;
	
	/* Ventaja de utilizar capital en vez de total:
		- Guardamos el valor en una variable que ya habiamos creado 
		  anteriormente y ya habiamos utilizado, por lo que no tendremos
		  que crear una nueva variable para almacenar el valor total, y 
		  ahorrar�amos mucho c�digo.
		  
	   Inconveniente de utilizar capital en vez de total:
	   	- Al guardar el valor total en la variable capital, perderemos su 
		  valor inicial ya que se sobreescribir�, y no podremos utilizar 
		  de ese valor m�s adelante en el programa.
	*/
	
}
