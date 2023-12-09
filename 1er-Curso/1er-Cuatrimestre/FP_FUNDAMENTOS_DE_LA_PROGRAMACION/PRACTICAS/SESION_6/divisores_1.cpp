/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 30/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 1:

*/
#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA 1: DIVISORES. " << endl;
	
	// Declarar las variables, constantes y vectores.
	
	const int MAX_NUM_DIVISORES = 100; 
	double divisores[MAX_NUM_DIVISORES];
	
	int num = 0,
		total_divi = 0;

	// Entrada de datos
	
	cout << "\n  Introduce un n�mero entero para mostrar sus divisores -> \n  ";
	cin >> num;
	
	cout << "\n �Datos guardados correctamente! \n" << endl;
	
	// C�mputos.
		
	for (int i = 2; i <= num/2; i++){
		if (num % i == 0){
			divisores[total_divi] = i;
			total_divi++;
		}
	}

	// Salida de datos.
	
	cout << "  El n�mero " << num << " tiene " << total_divi
		 << " divisores, que son: \n ";
	for (int i = 0; i < total_divi; i++)
		cout << " " << divisores[i] << ",";
	
	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. \n";	
}

