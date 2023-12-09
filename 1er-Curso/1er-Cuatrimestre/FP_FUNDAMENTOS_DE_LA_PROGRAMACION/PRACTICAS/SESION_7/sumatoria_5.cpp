/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 16/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 5. Dado un vector de enteros v y dado un n�mero T, se quiere ver 
	si hay una serie consecutiva de elementos del vector que sume T. 
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA 5: SUMATORIA  \n" << endl;
	
	// Declarar las variables.
	
	const int LONGITUD_MIN = 0;
	const int LONGITUD_MAX = 100;	
	int longitud_v,
		v [LONGITUD_MAX],
		T,
		nums_rest,
		suma,
		pos_secuencia;

		
	bool sumatoria = false;
	
	// Entrada de datos.
	
	cout << "\n   Para empezar, ... \n" << endl;
	
	do{
		cout << "  �C�antos n�meros va a introducir? -> ";
		cin >> longitud_v;
	}while (longitud_v < LONGITUD_MIN || longitud_v > LONGITUD_MAX );
	
	cout << "\n    De acuerdo! ... \n" << endl;
	
	nums_rest = longitud_v;
	
	for (int i = 0; i < longitud_v; i++){
		cout << "  Ahora introd�celos uno a uno. N� Restantes: "
			 << nums_rest << " -> ";            
		nums_rest --;
		cin >> v [i];
	}
	
	cout << "\n    N�meros guardados correctamente!  " << endl;
	cout << "\n    Para terminar, ... \n" << endl;

	
	cout << "  Introduce el n�mero que desea comprobar si se puede obtener "
		 << "como suma del vector -> ";
	cin >> T;

	// C�mputos.
	
	for (int i = 0; i < longitud_v; i++){
		suma = 0;
		for (int j = i; j < longitud_v; j++){
			suma = suma + v [j];
			//cout << "i: " << i << " " << v[i] << endl;
			//cout << "j: " << j << " " << v[j] << endl;
			//cout << "suma: " << suma << endl;
			if (suma == T){
				sumatoria = true;
				pos_secuencia = i;
				break;
			}
		}
		if (sumatoria == true){
			break;
		}
	}
	
	// Salida de datos.
	
	switch (sumatoria){
		case true:
			cout << "\n\t Secuencia encontrada a partir de la posici�n. " 
				 << pos_secuencia;
		break;
		case false:
			cout << "\n\t Secuencia no encontrada. ";
		break;
	}

	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

