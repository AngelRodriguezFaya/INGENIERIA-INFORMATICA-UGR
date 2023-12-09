/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n 
// Ingenier�a Inform�tica 1� D2
// ETSIIT (Universidad de Granada)
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 11/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 22. Cree un programa principal que haga lo siguiente:
	- Cree dos objetos recta1 y recta2 de la clase Recta.
	
	- Lea seis reales desde teclado. Puede asumir que los valores se 
	  introducir�n correctamente y por tanto A y B no ser�n simult�neamente 
	  cero. Asigne los tres primeros a los coeficientes de recta1 y los otros 
	  tres a recta2. Imprima en pantalla el t�rmino independiente de cada recta.

	- Calcule e imprima la pendiente de cada recta.
	
	- Calcule e imprima el �ngulo en radianes con respecto al eje 
	  horizontal de cada recta.
	
	- Lea un valor de abscisa e imprima la ordenada seg�n recta1. 
	  A continuaci�n lea un valor de ordenada e imprima la abscisa que 
	  le corresponde.
	
	- Ejecute el m�todo EspejoAbsc sobre recta1 e imprima en pantalla la 
	  pendiente nueva (ser� la misma que antes pero cambiada de signo).
	  
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

class Recta{
	
	//Atributos.
	public:
		double A, B, C, abcisa, ordenada;
	
	//M�todos.
	public:
		double Pendiente();
		double AnguloRadEjeHoriz(double pendiente);
		double Ordenada(double x_intr);
		double Abcisa(double y_intr);
		void EspejoAbsc();
};

double Recta::Pendiente(){
	double pendiente;
	pendiente = -A/B;
	return pendiente;
}

double Recta::AnguloRadEjeHoriz(double pendiente){
	double angulo;
	angulo = atan(pendiente);
	return angulo;
}

double Recta::Ordenada(double x_intr){
	double y, x;
	x = x_intr;
	y = (- C - x * A) / B;
	return y;
}

double Recta::Abcisa(double y_intr){
	double y, x;
	y = y_intr;
	x = (-C - y * B) / A;
	return x;
}

void Recta::EspejoAbsc(){
	if (B != 0 && A != 0)
		B = -1 * B;
}

int main(){
	
	cout << "\n\tPROGRAMA: 22. RECTA CON DATOS DE MIEMBROS P�BLICOS. \n\n";

	// Declarar las variables.
	
	Recta recta1, recta2;
	double pendiente1 = 0,
		   pendiente2 = 0,
		   angulo1 = 0, 
		   angulo2 = 0,
		   ordenada1 = 0,
		   abcisa1 = 0,
		   pendiente_espejo = 0;
	
	// Entrada de datos.
	
	cout << "   Introduzca los tres primeros coeficientes de la Recta 1 -> "
		 << "\n   ";
	cin >> recta1.A >> recta1.B >> recta1.C;

	cout << "   Introduzca los tres primeros coeficientes de la Recta 2 -> "
		 << "\n   ";
	cin >> recta2.A >> recta2.B >> recta2.C;
	
	cout << "   Introduzca un valor de abcisa -> \n   ";
	cin >> recta1.abcisa;
	
	cout << "   Introduzca un valor de ordenada -> \n   ";
	cin >> recta1.ordenada;
	
	
	// C�mputos.
	
	pendiente1 = recta1.Pendiente();
	pendiente2 = recta2.Pendiente();
	angulo1 = recta1.AnguloRadEjeHoriz(pendiente1);
	angulo2 = recta2.AnguloRadEjeHoriz(pendiente2);
	ordenada1 = recta1.Ordenada(recta1.abcisa);
	abcisa1 = recta1.Abcisa(recta1.ordenada);
	recta1.EspejoAbsc(); // Recta Espejo
	pendiente_espejo = recta1.Pendiente(); // Pendiente R.Espe
	
	// Salida de datos.
	
	cout << "\n   T�rmino independiente de la Recta 1: " << recta1.C << endl;
	cout << "   T�rmino independiente de la Recta 1: " << recta2.C << endl;
	cout << "   Pendiente de la Recta 1: " << pendiente1 << endl;
	cout << "   Pendiente de la Recta 2: " << pendiente2 << endl;	
	cout << "   �ngulo en radianes con el eje horizontal en la Recta 1: "
		 << angulo1 << endl;
	cout << "   �ngulo en radianes con el eje horizontal en la Recta 2: "
		 << angulo2 << endl;	
	cout << "   Ordenada de la recta 1 en " << recta1.abcisa << " = "
		 << ordenada1 << endl;
	cout << "   Abcisa de la recta 1 en " << recta1.ordenada << " = "
		 << abcisa1 << endl;
	cout << "   Pendiente del espejo de la Recta 1: " << pendiente_espejo;


	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}

