/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 11/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	40. [Muy divisible] El programa imprimir� por pantalla aquellos n�meros en 
	el rango [min, max] que tienen k o m�s divisores (es decir, los n�meros muy 
	divisibles dado el valor de k)	
	
	SI ME FIJO, SIEMPRE SE CUMPLE QUE EL �LTIMO DIVISOR DE UN N�MERO ES MENOR
	O IGUAL QUE LA MITAD DE ESE N�MERO.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 40. MUY DIVISIBLE \n\n";
	
	// Declarar las variables.
	
	int min = 0,
		max = 0,
		k = 0,
		num_divis = 0;	// numeros de divisores
	
	// Entrada de datos.
	
	cout << "  Introduce el m�nimo -> ";
	cin >> min;
	
	do{
		cout << "  Introduce el m�ximo -> ";
		cin >> max;
	}while (max < min);
	
	do{
		cout << "  Introduce un n�mero entero 'k'"
			 << " (que determinar� el n�mero de divisores). -> ";
		cin >> k;
	}while (k < 1);

	
	// C�mputos.
		
	cout << "\n Los n�meros que est�n en el rango" 
		 << " [" << min << " , " << max << "]"
		 << " y tienen " << k << " o m�s divisores (son muy divisibles) "
		 << "son: \n" << endl; 
	                               

			// Busqueda de n�meros muy divisibles en [min,max]
	for (int n = min; n <= max; n++){
		num_divis = 0;
			//Busco los divisores de n.
        for (int i = 2; i <= n/2; i++){   		// i = 2 --> Divisor
        	if(n%i==0){ 						// ultimo divisor = n/2
				num_divis++;
        	}
    	}
    	if(num_divis >= k){
        	cout << "\t" << n << endl;
    	}
	}


	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

