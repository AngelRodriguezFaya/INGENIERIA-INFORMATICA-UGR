/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n 
// Ingenier�a Inform�tica 1� D2
// ETSIIT (Universidad de Granada)
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 11/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 23: Construya un programa que lea el precio de dos productos 
	(euros y c�ntimos de un	producto y euros y c�ntimos del otro) y construya 
	dos objetos de la clase Dinero para almacenar el precio de cada producto.
	A continuaci�n, el programa principal debe recuperar las cantidades de 
	ambos precios (accediendo a los datos miembros p�blicos de cada objeto), 
	sumarlas (la suma de las cantidades enteras la tiene que hacer en el
	propio main) y construir un tercer objeto con el resultado de la suma. 
	Finalmente, el programa debe imprimir en pantalla el n�mero de euros y 
	c�ntimos del tercer objeto.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

class Dinero{
	
	//Atributos.
	public:
		int euros, centimos;
	
	//M�todos.
	public:
		void SetEurCent(int _euros, int _centimos);
};

void Dinero::SetEurCent(int _euros, int _centimos){
	centimos = _centimos;
	while (centimos >= 100){
		euros = _euros + 1;
		centimos = _centimos - 100;
	}
}


int main(){
	
	cout << "\n\tPROGRAMA: 23. DINERO CON DATOS MIEMBRO P�BLICOS. \n\n";

	// Declarar las variables.
	
	int suma_euros = 0, 
		suma_centimos = 0;
	
	Dinero dinero1, dinero2, dinero_suma;
	
	// Entrada de datos.
	
	cout << "   Introduzca el precio del primer producto en euros y c�ntimos ->"
		 << "\n   ";
	cin >> dinero1.euros >> dinero1.centimos;
	dinero1.SetEurCent(dinero1.euros, dinero1.centimos);
	
	cout << "   Introduzca el precio del segundo producto en euros y c�ntimos ->"
		 << "\n   ";
	cin >> dinero2.euros >> dinero2.centimos;
	dinero2.SetEurCent(dinero2.euros, dinero2.centimos);

	// C�mputos.
	
	suma_euros = dinero1.euros + dinero2.euros;
	suma_centimos = dinero1.centimos + dinero2.centimos;
	
	dinero_suma.SetEurCent(suma_euros, suma_centimos);
	
	// Salida de datos.
	
	cout << "\n   Total: ";
	cout << "\n\t Euros: " << dinero_suma.euros;
	cout << " \n\t C�ntimos: " << dinero_suma.centimos;


	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

