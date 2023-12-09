/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 08/11/2022
////////////////////////////////////////////////////////////////////////////

/*
	30. [Aproximaci�n de p por Gregory-Leibniz] 
	b) Calculo (-1)^i con un bucle.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 30. APROXIMACI�N DE PI POR GREGORY-LEIBNIZ. "
		 << " APARTADO b) \n";
	cout << endl;	
	
	// Declarar las variables.
	
	const double TOPE_MAX = 100000; /*Lo he pusto ya que as� es mas visual a la
									  hora de corregir errores en el c�digo, 
								      porque me puedo equivocar y poner o 
									  quitar alg�n cero.
									*/
	double tope = 0,
		   suma = 0,
		   pi_aprox = 0,
		   potencia = -1.0,
		   base = -1.0;
	
	// Entrada de datos.
		
	do{
		cout << "  Introduzca el �ndice de la �ltima interacci�n"
			 << "(debe estar entre 1 y 100 mil) -> ";
		cin >> tope;
	}while ((tope < 1) || (tope > TOPE_MAX));
	
	
	/* La aproximaci�n de pi por Gregrory-Leibniz es: 
	
		Pi				(-1)^i
	----------  = 	-------------------
		4				2 * i + 1 
	
	*/
	
	// C�mputos.
	
	for (int i = 0; i <= tope; i++){
		potencia = potencia * base;
		suma = suma + (potencia/(2 * i + 1));
	}
	
	pi_aprox = 4 * suma;
	
	// Salida de datos.
	
	cout.precision(15);		// Nos muestra s�lo 15 decimales.
	
	cout << "\n\t El valor aproximado de PI por Gregory-Leibniz es: "
		 << pi_aprox << endl;
		 
		
	cout << "\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		
}
