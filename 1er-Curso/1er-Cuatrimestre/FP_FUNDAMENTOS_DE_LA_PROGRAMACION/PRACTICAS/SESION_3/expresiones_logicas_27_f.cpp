#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 27.EXPRESIONES L�GICAS. \n\n";

	/*
		Escriba una expresi�n l�gica que sea verdadera si un car�cter 
		es una vocal (s�lo se consideran vocales las min�sculas sin 
		acentos) y falso en otro caso.
	*/
	
	char cter = ('a', 'e', 'i', 'o', 'u');
	char letra2;
	bool comprobar;
	
	cout << " Introduce una letra: ";
	cin >> letra2;
	
	comprobar = (letra2 == cter);
		
	if (comprobar){
		cout << "\n\t VERDADERO" << comprobar;
	}
	else{
		cout << "\n\t FALSO" << comprobar;
	}

}
