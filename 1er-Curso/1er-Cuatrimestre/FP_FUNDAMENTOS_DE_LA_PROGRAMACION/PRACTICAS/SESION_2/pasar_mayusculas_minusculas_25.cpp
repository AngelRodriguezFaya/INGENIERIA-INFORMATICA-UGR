/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 28/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que pasa de may�sculas a min�sculas utilizando la relaci�n
	que hay en C++ entre ambos.
*/

/*
	A 65	a 97
	B 66	b 98
	C 67	c 99
	D 68	d 100
	E 69	e 101
	F 70	f 102
	G 71	g 103
	  . 	  .
	  .		  .
	  .		  .
	  
	Como vemos la diferencia entre may�sculas y minusculas es 32, y es 
	siempre constante.
*/
	
#include <iostream>
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: INTERCAMBIO DE MAY�SCULAS A MIN�SCULAS. \n\n";
	
	const int CONVER_MAYUS_MINUS = 32;  // La constante es int porque es entero
	char mayus, minus;                  //La variable es char porque son letras
	 
	cout << " Introduzca la letra EN MAY�SCULA: ";
	cin >> mayus;
	
	minus = mayus + CONVER_MAYUS_MINUS;
	
	cout << "\t\n La letra es: " << minus;
}

