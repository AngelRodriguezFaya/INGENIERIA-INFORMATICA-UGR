/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 22/09/2022
////////////////////////////////////////////////////////////////////////////

/*
	Programa que transforma una cantidad de grados en radianes.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	double grado_1;	//Declarar las variables
	double grado_2;
	double radianes_1;
	double radianes_2;
	
	const double PI = 6 * asin(0.5);
	
	cout << " Introduzca los primeros grados:  ";
	cin >> grado_1;
	cout << " Introduzca los segundos grados ";
	cin >> grado_2;
	
	radianes_1 = grado_1*(PI/180);
	radianes_2 = grado_2*(PI/180);

	cout << "\n Los primeros grados en radianes son: " << radianes_1;
	cout << "\n Los segundos grados en radianes son: " << radianes_2;
	
}
