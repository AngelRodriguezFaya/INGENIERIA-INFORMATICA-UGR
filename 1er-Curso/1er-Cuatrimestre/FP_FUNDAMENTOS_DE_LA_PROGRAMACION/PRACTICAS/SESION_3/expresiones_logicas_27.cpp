/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 05/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que opera expresiones l�gicas en distintos casos.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 27.EXPRESIONES L�GICAS. \n\n";

	/*
		Escriba una expresi�n l�gica que sea verdadera si una variable
		de tipo car�cter llamada letra es una letra min�scula y falso 
		en otro caso.
	*/	
	
	char letra;
	bool resul_a;
	
	cout << " Introduce una letra: ";
	cin >> letra;
	
	resul_a = (('a' <= letra) && (letra <= 'z'));
	
	if (resul_a){
		cout << "\t Resultado: " << resul_a << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_a << "\n\n";
	}


	/*
		Escriba una expresi�n l�gica que sea verdadera si una variable 
		de tipo entero llamada edad es menor de 18 o mayor de 65 
		y falso en otro caso.
	*/
	
	int edad = 0;
	bool resul_b;
	
	cout << " Introduce tu edad: ";
	cin >> edad;
	
	resul_b = ((edad < 18) || (edad > 65));
	
	if (resul_b){
		cout << "\t Resultado: " << resul_b << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_b << "\n\n";
	}

	/*
		Escriba una expresi�n l�gica que sea verdadera si una variable 
		de tipo entero llamada adivine est� entre 1 y 100 y falso en 
		otro caso.
	*/
	
	int adivine = 0;
	bool resul_c;
	
	cout << " Introduce un n�mero: ";
	cin >> adivine;
	
	resul_c = ((1 < adivine) && (adivine < 100));
	
	if (resul_c){
		cout << "\t Resultado: " << resul_c << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_c << "\n\n";
	}

	/*
		Escriba una expresi�n l�gica que sea verdadera si un a�o es bisiesto 
		y falso en otro caso. Los a�os bisiestos son aquellos que o bien son 
		divisibles por 4 pero no por 100, o bien son divisibles por 400. 
	*/
	
	int anio;
	bool resul_d;
	
	cout << " Introduce un a�o: ";
	cin >> anio;
	
	resul_d = (((anio % 4) == 0) || ((anio % 400) == 0));
		
	if (resul_d){
		cout << "\t Resultado: " << resul_d << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_d << "\n\n";
	}

	/*
		Escriba una expresi�n l�gica que sea verdadera si un dato 
		de velocidad es mayor o igual que 100 kil�metros por hora 
		y falso en otro caso.
	*/
	
	int vel = 0;
	bool resul_e;
	
	cout << " Introduce una velocidad (en km/h): ";
	cin >> vel;
	
	resul_e = (100 <= vel);
	
	if (resul_e){
		cout << "\t Resultado: " << resul_e << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_e << "\n\n";
	}

	/*
		Escriba una expresi�n l�gica que sea verdadera si un car�cter 
		es una vocal (s�lo se consideran vocales las min�sculas sin 
		acentos) y falso en otro caso.
	*/
	
	char vocal = (('a') || ('e') || ('i') || ('o') || ('u')); 
	char letra2;	// letra ya se ha utilizado antes, por eso es letra2
	bool resul_f;
	
	cout << " Introduce una letra: ";
	cin >> letra2;
	
	resul_f = (letra2 == vocal);
		
	if (resul_f){
		cout << "\t Resultado: " << resul_f << "\n\n";
	}
	else{
		cout << "\t Resultado: " << resul_f << "\n\n";
	}

}

