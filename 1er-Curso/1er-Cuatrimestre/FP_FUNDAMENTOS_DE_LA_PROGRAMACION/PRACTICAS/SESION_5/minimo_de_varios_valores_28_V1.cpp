////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 30/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	(V1)	28. [M�nimo de varios valores]. En este programa se pide que se 
	vayan leyendo varios n�meros enteros desde el teclado y que finalice 
	cuando se introduzca 0. Al final muestra el n�mero en total de n�meros 
	introducidos y el m�nimo de ellos.
	
	Para ello, he utilizado un bucle while que finalizar� cuando introduz-
	camos 0 y un condicional if dentro por si el n�mero que acabamos de 
	introducir es menor que el minimo que ya hab�amos guardado antes, se 
	actualize y sea ese el nuevo m�nimo.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;																	
																							
int main(){																				
		
	cout << "\n\t\tPROGRAMA: 28. M�NIMO DE VARIOS VALORES. (V1)";
	cout << endl;	
																		
	// Declarar las variables.
	
	int num, 
		min, 
		cont = 0;

	// Entrada de datos.
	
	cout << "\n  Introduzca un n�mero entero negativo. "
		 << "Para finalizar introduzca un n�mero entero positivo -> ";
	cin >> num;
	
	min = num;
		
	// C�mputos.
	
	while (num < 0 ){
		cont++;
		if (num < min){
			min = num;
		}
		cout << "\n  Introduzca un n�mero entero negativo. "
		 	 << "Para finalizar introduzca un n�mero entero positivo -> ";
		cin >> num;
	}
	
	// Salida de datos.
	
	cout << "\n\t Ha introducido " << cont 
		 << " numeros en total y el menor ha sido " << min;
	
		     
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}
