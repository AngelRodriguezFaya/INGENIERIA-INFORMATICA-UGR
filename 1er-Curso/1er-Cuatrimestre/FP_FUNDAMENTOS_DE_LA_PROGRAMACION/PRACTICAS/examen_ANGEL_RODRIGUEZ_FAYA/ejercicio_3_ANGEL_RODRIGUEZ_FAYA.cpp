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

int main(){
	
	cout << "\n\tPROGRAMA: EJERCICIO 3 EXAMEN FP(P) 1�D2. \n" << endl;
	
	// Declarar las variables, constantes y vectores.
	
	const int MAX_NUM_VECTOR = 100;
	int conjunto[MAX_NUM_VECTOR];
	int num = 0,
		util_conjunto = 0,
		antiguo_max = 0, // diez mil
		total_series = 0, 
		pos_recorrida = 0;
	
	// Entrada de datos
	
	cout << "\n  Introduzca los n�meros que componen el vector. "
		 << "Para finalizar introduzca -1. -> \n  ";
	num = cin.get();
	while (num != -1){
		conjunto[util_conjunto] = num;
		cin.get();
		util_conjunto ++;
	}

	// C�mputos.
	
	for (int i = 0; i < util_conjunto; i++)
		posiciones_fin_serie[i] = 0;
	
	for (int i = 0; i < 7; i++){
		if (conjunto[i] > antiguo_max){
			antiguo_max = conjunto[i];
		}else{
			total_series++;
			antiguo_max = 0;
		}
	}
	
	cout << " En total hay " << total_series << " series" << endl;
	
	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. \n";	
}

