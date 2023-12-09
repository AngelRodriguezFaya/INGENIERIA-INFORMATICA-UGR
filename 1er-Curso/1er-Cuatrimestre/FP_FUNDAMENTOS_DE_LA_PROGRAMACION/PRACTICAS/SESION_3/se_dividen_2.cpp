/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 05/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que lee dos valores enteros desde el teclado y nod dice si 
	cualquiera de ellos divide o no (de forma entera) al otro.
	
	% -> M�dulo (resto de la divisi�n) 
	Para saber si un n�mero divide al otro, el resto de la divisi�n entre ambos
	debe de ser 0, si es distinto, no se dividen.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: SE DIVIDEN. \n\n";

	int num1, num2;
	 
	cout << " Introduzca el valor de los dos n�meros: ";
	cin >> num1 
		>> num2;
	

	if (((num1 % num2) == 0) || ((num2 % num1) == 0)){
		cout << "\n\t Un n�mero divide al otro.";
	} else{
		cout << "\n\t Ninguno divide al otro.";
	}
}

