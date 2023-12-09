/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 10/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 18: He recopilado mi soluci�n del ejercicio 41 [Tarifa a�rea: 
	m�ltiples billetes] y la novedad de este ejercicio es que se resuelve
	utilizando unas funciones que llamo dentro de mi programa principal, en vez 
	de escribir todo el c�digo dentro dell programa principal c�mo se ped�a
	en el ejercicio 41. 
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

float descuento_kms(float distancia){
	const float RECARGO_KM = 0.1;
	const float TRF_BASE = 150.0;
	const float DTO_700_KMS = 0.02;
	float recar_300 = 0,
		  dto_700 = 0,
		  precio = 0;
	if (distancia <=300)
		precio = TRF_BASE;
	else{
		recar_300 = TRF_BASE + ((distancia - 300) * RECARGO_KM);
		precio = recar_300;
		if (distancia > 700){
			dto_700 = recar_300 - (recar_300 * DTO_700_KMS);
			precio = dto_700;
		}
	}
	return precio;
}

float descuento_puntos(float puntos, float precio){
	const float DTO_100_PUNTOS = 0.03;
	const float DTO_200_PUNTOS = 0.04;
	float precio_fin = 0;
	if (puntos <=100){       
		precio_fin = precio;
	}
		if (puntos > 100){
		precio_fin = precio - (precio * DTO_100_PUNTOS);
	}
	if (puntos > 200){
		precio_fin = precio - (precio * DTO_200_PUNTOS); 	
	}
	return precio_fin;	
}
int main(){
	
	cout << "\n\tPROGRAMA: 18. TARIFA A�REA CON FUNCIONES. \n\n";
		
	// Declarar las variables, ordenadas seg�n se van utilizando.	
	char opc_bille;
	int num_bille = 1;
	float dist, ptos, precio, precio_final;

	//Introducci�n de datos.
	
	while (opc_bille != '#'){
		cout << "\n   Bienvenido, a continuaci�n introduzca: " << endl
			 << "   'N' si quiere un nuevo billete. " << endl	
			 << "   '#' si quiere finalizar el programa. " << endl
			 << "   Escoja una opci�n -> ";
		cin >> opc_bille;
		if (opc_bille == 'N' || opc_bille == 'n'){
			cout << "\n ------------------------------------------------------";
			cout << "\n 		BILLETE N�" << num_bille << endl;
			cout << " ------------------------------------------------------";
			cout << endl;
			do{
				cout << "  Introduzca la distancia a su destino "
					 <<"(en kilometros): ";
				cin >> dist;
			}while (dist < 0);
	
			cout << endl;
	
			do{
				cout << "  Introduzca el n�mero de puntos que tiene: ";
				cin >> ptos;
			}while ((ptos < 0) || (ptos > 400)); 	
	
	//C�mputos:
	
			//Descuento de Kil�metros.
		precio = descuento_kms(dist);
	
			//Descuentos de puntos.
		precio_final = descuento_puntos(ptos, precio);
			
		
		num_bille++;
			
	//Salida de datos.
	
			cout << "\n\t El precio final de su billete es: " << precio_final;
			cout << endl;
			cout << "\n _____________________________________________________";
			cout << "\n\n\n";
		}
	}

	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

