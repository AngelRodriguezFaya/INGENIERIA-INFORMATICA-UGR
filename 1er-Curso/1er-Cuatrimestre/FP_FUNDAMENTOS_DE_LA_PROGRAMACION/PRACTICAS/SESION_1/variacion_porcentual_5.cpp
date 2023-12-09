/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 22/09/2022
////////////////////////////////////////////////////////////////////////////

/*
	Programa que calcula la variaci�n porcentual de un producto introduciend�le
	el valor inicial y el valor final del producto.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	double valor_ini;	//Declarar las variables
	double valor_fi;
	double vari_porcen;
	
	cout << " Introduzca el valor inicial del producto:  ";
	cin >> valor_ini;
	cout << " Introduzca el valor final del producto: ";
	cin >> valor_fi;
	
	vari_porcen = abs(100*((valor_fi - valor_ini)/valor_ini));
	
	cout << "\nLa variaci�n porcentual es: " << vari_porcen << "%";
	
}
