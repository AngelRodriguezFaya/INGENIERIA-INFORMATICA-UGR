#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 27.EXPRESIONES L�GICAS. \n\n";

	/*
		Escriba una expresi�n l�gica que sea verdadera si una variable 
		de tipo entero llamada adivine est� entre 1 y 100 y falso en 
		otro caso.
	*/
	
	int anio;
	bool comprobar;
	
	cout << " Introduce un a�o: ";
	cin >> anio;
	
	comprobar = (((anio % 4) == 0) || ((anio % 400) == 0));
		
	if (comprobar){
		cout << "\n\t" << comprobar << " es bisiesto";
	}
	else{
	cout << "\n\t" << comprobar << " es bisiesto";
	}

}
