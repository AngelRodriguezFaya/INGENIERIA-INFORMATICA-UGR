/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 03/11/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	26. [Tarifa a�rea con filtro de entrada de datos] He cogido este ejercicio
	realizado anteriormente y lo he modificado para que el programa calcule la 
	tarifa final de una serie de billetes. Para ello, cada vez que se introduz-
	can los datos de un nuevo billete, el usuario introducir� el car�cter 'N' 
	(Nuevo). La entrada de datos finaliza con el car�cter '#'. Si se introduce
	un car�cter distinto, el programa pedir� un nuevocar�cter. 
	
	Para ello he metido todo el programa anterior en un bucle while y un condi-
	cional if. Dentro del bucle while he metido el mensaje para que el usuario
	elija la opci�n que desee, s�lo se saldr� del bucle si introduce '#'. 
	En el condicional if, he puesto como condicion que se ejcute cuando el
	usuario introduzca 'N' � 'n', por lo que si no introduce los dos caracteres
	mencionados, le seguir� apareciendo el mensaje todo el rato. Dentro del if
	est� el resto del programa.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 41. TARIFA A�REA: M�LTIPLES BILLETES. \n\n";
		
	// Declarar las constantes, ordenadas seg�n se van utilizando.
	const float TRF_BASE = 150.0;
	const float RECARGO_KM = 0.1;
	const float DTO_700_KMS = 0.02; 
	const float DTO_100_PUNTOS = 0.03;
	const float DTO_200_PUNTOS = 0.04;

	// Declarar las variables, ordenadas seg�n se van utilizando.	
	char opc_bille;
	int num_bille = 1;
	float dist, ptos,
	      recar_300 = 0,
		  precio = 0,
          dto_700 = 0,
          precio_fin = 0;

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
			if (dist <=300){
				precio = TRF_BASE;
			} else {
				recar_300 = TRF_BASE + ((dist - 300) * RECARGO_KM);
				precio = recar_300;
				if (dist > 700){
					dto_700 = recar_300 - (recar_300 * DTO_700_KMS);
					precio = dto_700;
				}
			}
	
			//Descuentos de puntos.
			if (ptos <=100){       
				precio_fin = precio;
			}
	
			if (ptos > 100){
				precio_fin = precio - (precio * DTO_100_PUNTOS);
			}
	
			if (ptos > 200){
				precio_fin = precio - (precio * DTO_200_PUNTOS); 	
			}
			
			num_bille++;
			
	//Salida de datos.
	
			cout << "\n\t El precio final de su billete es: " << precio_fin;
			cout << endl;
			cout << "\n _____________________________________________________";
			cout << "\n\n\n";
		}
	}

	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

