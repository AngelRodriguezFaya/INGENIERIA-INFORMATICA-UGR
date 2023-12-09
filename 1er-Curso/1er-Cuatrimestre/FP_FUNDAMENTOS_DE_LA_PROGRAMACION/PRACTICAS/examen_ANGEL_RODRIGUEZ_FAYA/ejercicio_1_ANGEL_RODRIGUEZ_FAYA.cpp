/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n.
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// DNI: 21037906-J
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 30/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	------------------------------------------------------------------------
		    EXAMEN FP(P) 1� INGENIER�A INFORM�TICA GRUPO D2
	------------------------------------------------------------------------  
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

double potencia (double base, double exponente)
{
	double resultado;
	resultado = exp(exponente*log(base));
	return resultado;
}

int main(){
	
	cout << "\n\tPROGRAMA: EJERCICIO 1 EXAMEN FP(P) 1�D2. \n" << endl;
	
	double bas = 0,		// base
		   expo = 0; 	// exponente
	
	cout << "  Introduzca la base -> \n  ";
	cin >> bas;
	
	cout << "  Introduzca el exponente -> \n  ";
	cin >> expo;
	
	cout << "\n La potencia de " << bas << " elevado a " << expo
		 << " es " << potencia(bas, expo);

	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. \n";	
}

