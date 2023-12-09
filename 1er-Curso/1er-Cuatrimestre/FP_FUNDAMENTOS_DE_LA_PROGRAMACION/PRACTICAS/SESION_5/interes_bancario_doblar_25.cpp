/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 29/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	[7 INTER�S BANCARIO] Programa que calcula el inter�s bancario a traves 
	de una f�rmula d�ndole los valores del capital y el inter�s. En este nuevo
	programa (el 25) se trata de rescatar el programa 7, pero esta vez tendre-
	mos que calcular el n�mero de a�os que han de pasar para doblar el capital
	inicial y el dinero total que se obtendr�a al final. 
	
	Para ello utilizo un bucle de tipo while en el que se sigue ejcutando cada
	vez que el valor total que vamos calculando sea menor que el doble del 
	capital inicial.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;																	
																							
int main(){																				
		
	cout << "\n\t\tPROGRAMA: 25.INTER�S BANCARIO (DOBLAR)";
	cout << endl;	
																		
	// Declarar las variables.
	
	double capi = 0.0,	
	       inter = 0.0,
		   total = 0.0;
	int exponente = 1,
	    num_anios = 0;
	
	// Entrada de datos.
	
	cout << "\n  Introduzca su capital:  ";
	cin >> capi;
	cout << "  Introduzca el inter�s(sin el signo de %): ";
	cin >> inter;
		
	// C�mputos.
	
	while (total < (2 * capi)){
		total = capi * pow((1 + inter/100), exponente);
		exponente++;
		num_anios++;
	}
	
	// Salida de datos.
	
	cout << "\n\tPara doblar la cantidad inicial han de pasar "
	     << num_anios << " a�os." << endl 
	     << "\tAl finalizar, se obtendr� un total de "
	     << total << " euros." << endl;	
	     
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}
