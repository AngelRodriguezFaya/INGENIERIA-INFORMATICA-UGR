/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 30/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	27. [N�mero Narcisista] Un n�mero entero de n d�gitos se dice que es 
	narcisista si se puede obtener como la suma de las potencias n-�simas 
	de cada uno de sus d�gitos.
	
	Para realizarlo creo las siguientes estructuras:
	
		- un bucle while -> para averiguar el n�mero de digitos.
		- un bucle for -> donde saco la �ltima cifra, realizo la suma de cada
			cifra elevada al n�mero de d�gitos, y por �ltimo quita la �ltima 
			cifra para cuando se vuelva a realizar el bucle siga con la 
			siguiente cifra.
		- un condicional if -> para mostar si es o no narcisista.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.							
using namespace std;	

int main(){
	
	cout << "\n\t\tPROGRAMA: 27. N�MERO NARCISISTA." << endl;
	
	// Declarar las variables.
	
	int num = 0,
		num_digitos = 1,
		cifra_ult = 0,			// �ltima cifra
		total = 0,
		aux = 0;				// Variable auxiliar
		
	bool num_narcisista;
		
	
	// Entrada de datos.
	
	cout << "\n Introduce el n�mero que desea comprobar -> ";
	cin >> num;
	
	aux = abs(num);		/* La variable aux es una copia de num para no 
							 	perder su valor original. */

	// C�mputos.
	
	while (aux > 9){		// Sirve para averiguar el numero de d�gitos.
		aux = aux/10;
		num_digitos++;
	}

	aux = abs(num);
	
	for (int i=0; i < num_digitos; i++){
		cifra_ult = aux % 10;						// Sacar la �ltima cifra.
		total += pow(cifra_ult, num_digitos);   // -> total = total + pow(...)
		aux /= 10;		// -> aux = aux/10  	    // Quitar la �ltima cifra.
	}

	num_narcisista = (total == num);
	

	// Salida de datos.
	
	if (num_narcisista){
		cout << "\n\t El n�mero " << num << " es narcisista";
	}
	else{
		cout << "\n\t El n�mero " << num << " no es narcisista";
	}	


	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		
}
