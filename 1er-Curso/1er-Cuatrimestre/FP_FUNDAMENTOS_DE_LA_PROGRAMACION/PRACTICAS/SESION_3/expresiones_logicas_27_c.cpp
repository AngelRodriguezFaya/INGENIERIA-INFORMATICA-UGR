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
	
	int adivine = 0;
	bool comprobar;
	
	cout << " Introduce un n�mero: ";
	cin >> adivine;
	
	comprobar = 1 < adivine && adivine < 100;
	
	if (comprobar){
		cout << "\n\t VERDADERO";
	}
	else{
		cout << "\n\t FALSO";
	}

}
