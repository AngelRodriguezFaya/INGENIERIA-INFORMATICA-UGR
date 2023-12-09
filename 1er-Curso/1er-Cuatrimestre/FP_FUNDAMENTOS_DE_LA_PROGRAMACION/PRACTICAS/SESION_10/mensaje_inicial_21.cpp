/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n 
// Ingenier�a Inform�tica 1� D2
// ETSIIT (Universidad de Granada)
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 11/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 21. Construya un programa para mostrar al inicio de 
	nuestros programas un mensaje inicial (de tipo string) enmarcado 
	en sendas l�neas de caracteres.  
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
#include <string>
using namespace std;

string LeeString(char terminador){
   string cadena;
   char caracter;
   
   caracter = cin.get();
   
   while (caracter != terminador){
      cadena.push_back(caracter);
      caracter = cin.get();
   }
   
   return cadena;
}

void ImprimirLinea(char caracter, int num_repeticiones){
	cout << "\n";
	for(int i = 0; i < num_repeticiones; i++){
		cout << caracter;
	}
}

void ImprimirMarco(string mensaje, char caracter){
	
	int num_caracteres = mensaje.size();

	ImprimirLinea(caracter, num_caracteres);
	cout << mensaje;
	ImprimirLinea(caracter, num_caracteres);
}
int main(){
	
	cout << "\n\tPROGRAMA 21: MENSAJE INICIAL. \n\n";
	
	// Declarar las variables.
	
	const char TERMINADOR = '@';
	char car;
	string msj;
	
	// Entrada de datos.
	
	cout << "   Introduzca el caracter con el que desea enmarcar -> \n   ";
	cin >> car;
	
	cout << "   A continuaci�n introduce el mensaje a enmarcar -> \n   ";
	msj = LeeString(TERMINADOR);
	
	ImprimirMarco(msj, car);
	
	
	
	









	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

