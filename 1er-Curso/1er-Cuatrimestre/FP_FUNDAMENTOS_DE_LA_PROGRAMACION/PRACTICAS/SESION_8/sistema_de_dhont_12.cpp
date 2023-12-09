/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 29/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 12: Se quiere construir un programa que lea el n�mero total de 
	esca�os a distribuir, el n�mero de partidos que han participado en las 
	elecciones y los votos obtenidos por cada uno de ellos. El programa 
	mostrar� cu�ntos esca�os obtuvo cada partido.
		
	La asignaci�n de los esca�os se hace a trav�s de un proceso iterativo 
	en el que en cada iteraci�n se asigna un esca�o a un partido y as� 
	hasta llegar al n�mero total deesca�os a repartir. En una determinada 
	iteraci�n, un partido se llevar� un esca�o si tiene el mayor cociente de 
	D�Hondt, definido �ste como sigue:

				Cociente de D�Hondt = Vi/(Si + 1)

	D�nde:
	- Vi es el n�mero total de votos obtenidos en las elecciones por el 
	  partido i. 
	- Si es el n�mero de esca�os asignados hasta esa iteraci�n al partido i.

*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA 12: SISTEMA DE D'HONDT. " << endl;
	
	// Declarar las variables, constantes y vectores.
	
	const int MAX_NUM_PARTIDOS = 100; 
	double escanios_asignados[MAX_NUM_PARTIDOS];
	double votos[MAX_NUM_PARTIDOS];
	double hondts[MAX_NUM_PARTIDOS];
	
	int num_partidos = 0,
		num_votos = 0,
		num_escanios = 0,
		max = 0,
		pos_max = 0;

	// Entrada de datos
	
	cout << "\n  Introduce el n�mero total de esca�os a distribuir -> \n  ";
	cin >> num_escanios;
	
	do{
		cout << "  Introduce el n�mero de partidos que han participado -> \n  ";
		cin >> num_partidos;
	}while (num_partidos < 1 || num_partidos > MAX_NUM_PARTIDOS);
	
	cout << "  Introduce el n�mero de votos obtenido por cada partido -> \n";
	for (int v = 0; v < num_partidos; v++){
	    cout << "  Partido N�" << v+1 << ": ";
		cin >> num_votos;
		votos[v] = num_votos;
		hondts[v] = num_votos;
	}
	
	cout << "\n �Datos guardados correctamente! \n" << endl;
	
	// C�mputos.
		
		// Primero inicializo a 0 el vector escanios para que no haya problemas.
		
	for (int i = 0; i < num_escanios; i++)
		escanios_asignados[i] = 0;
	 	
	for (int i = 0; i < num_escanios; i++){
		max = 0;
		pos_max = 0;
		for (int j = 0; j < num_partidos; j++){
			if (hondts[j] > max){
				pos_max = j;
				max = hondts[j];
			}
		}
		escanios_asignados[pos_max]++;
		hondts[pos_max] = votos[pos_max] / (escanios_asignados[pos_max] + 1.0);
	}
	
	// Salida de datos.
	
	for (int i = 0; i < num_partidos; i++){
		cout << "  El partido N�" << i+1 << " con " << votos[i] 
			 << " votos, ha obtenido " << escanios_asignados [i]
			 << " esca�os. " << endl;
	}
	
	
	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. \n";	
}

