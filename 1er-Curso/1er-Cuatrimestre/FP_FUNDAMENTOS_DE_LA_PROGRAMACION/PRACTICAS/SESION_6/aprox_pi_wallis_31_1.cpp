/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 09/11/2022
////////////////////////////////////////////////////////////////////////////

/*
	31. [Aproximaci�n de p por Wallis]	
	1) Lo controlo con una variable de tipo bool.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 31. APROXIMACI�N DE PI POR WALLIS. "
		 << " APARTADO 1) \n";
	cout << endl;	
	
	// Declarar las variables.
	
	const double TOPE_MAX = 100000; /*Lo he pusto ya que as� es mas visual a la
									  hora de corregir errores en el c�digo, 
								      porque me puedo equivocar y poner o 
									  quitar alg�n cero.
									*/
	int tope = 0;
	    
	double producto = 1.0,	//Lo ini. a 1, para que al inicio no de problemas.
	    pi_aprox = 0.0,
	    num = 2.0,		//numerador
	    dem = 1.0;		//denominador
	
			/* las variables anteriores deben ser double porque los resultados 
			de los cocientes, son n�meros reales y no enteros */
		
	bool cambia_dem = true;
	
	// Entrada de datos.
		
	do{
		cout << "  Introduzca el �ndice de la �ltima interacci�n"
			 << "(debe estar entre 1 y 100 mil) -> ";
		cin >> tope;
	}while ((tope < 1) || (tope > TOPE_MAX));
	
	
	/* La aproximaci�n de pi por John Wallis es: 
	
		pi1		 2       2     4	   4	 6
	   ----  = 	---- * ---- * ---- * ---- * ----- * ...
		2		 1		 3 		3	   5      5
	
	*/
	
	// C�mputos.

	for (int i=0; i<=tope; i++){
		/*cout <<"i: " << i << endl;
		cout <<"num: " << num << endl;      //Para comprobar cuando no funcione
		cout <<"dem: " << dem  << endl;     // ejecuto estas tres lineas.
		*/
		producto = producto * (num/dem);
		if (cambia_dem){
			dem = dem + 2;
		}
		else{
			num = num + 2;
		}
		cambia_dem = ! cambia_dem;
	}
	
	pi_aprox = 2 * producto;
	
	// Salida de datos.
	
	cout.precision(15);		// Nos muestra s�lo 15 decimales.
	
	cout << "\n\t El valor aproximado de PI por John Wallis es: "
		 << pi_aprox << endl;
		 
		
	cout << "\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		
}
