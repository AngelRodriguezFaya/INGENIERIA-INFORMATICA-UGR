/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 05/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa en el que tenemos que resolver mini-problemas utilizando
	expresiones l�gicas.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 27.EXPRESIONES L�GICAS. \n\n";

	/*
		Escriba una expresi�n l�gica que sea verdadera si una variable 
		de tipo entero llamada edad es menor de 18 o mayor de 65 
		y falso en otro caso.
	*/
	
	int edad = 0;
	bool comprobar;
	
	cout << " Introduce tu edad: ";
	cin >> edad;
	
	comprobar = edad < 18 || edad > 65;
	
	if (comprobar){
		cout << "\n\t VERDADERO";
	}
	else{
		cout << "\n\t FALSO";
	}

}
