#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 27.EXPRESIONES L�GICAS. \n\n";

	/*
		Escriba una expresi�n l�gica que sea verdadera si un dato 
		de velocidad es mayor o igual que 100 kil�metros por hora 
		y falso en otro caso.
	*/
	
	int vel = 0;
	bool comprobar;
	
	cout << " Introduce una velocidad (en km/h): ";
	cin >> vel;
	
	comprobar = 100 <= vel;
	
	if (comprobar){
		cout << "\n\t VERDADERO";
	}
	else{
		cout << "\n\t FALSO";
	}

}
