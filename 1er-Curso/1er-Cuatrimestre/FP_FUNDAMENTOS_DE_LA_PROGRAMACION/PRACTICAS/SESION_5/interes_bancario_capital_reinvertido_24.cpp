////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 26/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	[7 INTER�S BANCARIO] Programa que calcula el inter�s bancario a traves 
	de una f�rmula d�ndole los valores del capital y el inter�s. En este nuevo
	programa (el 24) se trata de rescatar el programa 7, pero esta vez el dinero
	ser� reinvertido en otro plazo fijo de un a�o, y as� sucesivamente hasta
	los a�os que desee el cliente alargar esta opci�n. El programa ir� 
	mostrando las cantidades de dinero conforme avancen los a�os.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;																	
																							
int main(){		

	cout << "\n\t\tPROGRAMA: 24.INTER�S BANCARIO (CAPITAL REINVERTIDO)";
	cout << endl;																		
																				
	// Declarar las variables.
	
	double capi = 0.0,
		   inter = 0.0,
		   total = 0.0;
	int num_anios = 0,
		exponente = 1;
	
	// Entrada de datos.
	
	cout << "\n  Introduzca su capital ->  ";
	cin >> capi;
	cout << "  Introduzca el inter�s (entre 0 y 100 y sin el signo de %) -> ";
	cin >> inter;
	cout << "  Introduzca el n�mero de a�os durante los que quiere "
	     << "seguir reivirtiendo -> ";
	cin >> num_anios;
	
	// C�mputos y Salida de datos.
	
	for (int i=0; i<num_anios; i++){
		total = capi * pow((1 + inter/100), exponente);
		exponente++;
		cout << "\n\t El capital obtenido transcurrido el a�o n�mero " 
			 << i << " es de " << total;
	}
	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		

}
