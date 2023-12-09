////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 22/09/2022
////////////////////////////////////////////////////////////////////////////

/*
	Programa en el que nos muestro un salario final despu�s de haber
	introducido el salario base e haberlo incrementado un 2%.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	double salario_base;	//Declarar las variables
	double salario_final;
	
	cout << " Introduzca el salario_base:  ";
	cin >> salario_base;
	
	salario_final = 1.02*salario_base;
	
	cout << "\nEl salario final es: " << salario_final;
	
}
