/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 09/11/2022
////////////////////////////////////////////////////////////////////////////

/*
	32. [Aproximaci�n de p por Madhava sin usar pow]
	Importante: En la implementaci�n de esta soluci�n NO puede usar la funci�n 
	pow ni ning�n condicional if. Se le pide expresamente que para el c�mputo
	de cada t�rmino, intente aprovechar los c�mputos realizados en la iteraci�n 
	anterior.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	/* 
	                                            signo
	                                              |
	                                            ------
	 pi                                         (-1)^i	*	a^(2i+1)
	--- (APR�X)= sumatoria de tope en i=0  *  ----------------------
	 6										         2*i + 1
	
	
	En la siguiente l�nea, sustituyo en el i del exponente, i+1:
	
	num = a^2*(i+1)+1 = a^(2i+1+2) = a^(2i+1) * a^2    --> num * a^2
			------					    ----
			   ^		                 ^	
			   |					     |
			Iteraci�n i+1			Iteraci�n i
	
	dem = (2*i+1)+1	 =  2i+1+2    --> dem + 2
						----
	                      ^
	                      |
	                Iteraci�n i
	
	*/
	
	cout << "\n\tPROGRAMA: 32. APROXIMACI�N DE PI POR MADHAVA. \n";
	cout << endl;	
	
	// Declarar las variables.
	
	const double TOPE_MAX = 100000; /*Lo he pusto ya que as� es mas visual a la
									  hora de corregir errores en el c�digo, 
								      porque me puedo equivocar y poner o 
									  quitar alg�n cero.
									*/
	int tope = 0,
		signo = 1;		// Inicializo a 1 porque i=0, entonces (-1)^i => 1
	double a = 0.0,
		   num = 0.0,
		   dem = 1.0,
		   suma = 0.0,
		   pi_aprox = 0.0;
	
	// Entrada de datos.
	
	a = 1/sqrt(3);
	num = a;
	
	do{
		cout << "  Introduzca el �ndice de la �ltima interacci�n"
			 << "(debe estar entre 1 y 100 mil) -> ";
		cin >> tope;
	}while ((tope < 1) || (tope > TOPE_MAX));
	
	// C�mputos.
	
	for (int i=0; i<= tope; i++){
		suma = suma + signo * (num/dem);
		num = num * a * a;
		dem = dem + 2;
		signo = -signo;		
	} 
	
	pi_aprox = suma * 6;
	
	// Salida de datos.
	
	cout.precision(15);		// Nos muestra s�lo 15 decimales.
	
	cout << "\n\t El valor aproximado de PI por Madhava es: "
		 << pi_aprox << endl;
		 
	cout << "\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		
}




