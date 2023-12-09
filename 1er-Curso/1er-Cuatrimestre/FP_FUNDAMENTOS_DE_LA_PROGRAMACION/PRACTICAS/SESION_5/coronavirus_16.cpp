/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 31/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que te indica como actuar ante el COVID-19 en funci�n de
	los sintomas o enfermedades que tengamos.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 16. CORONAVIRUS \n\n";
	
	// Declarar las variables.
	
	int bodyTemp;			// bodyTemperature
	
	char diffiBreath,		// difficultyBreathing
		diabetes,
		cancer;
	
	// Entrada de datos.
	
	cout << "  Introduzca su temperatura corporal en grados Celsius -> ";
	cin >> bodyTemp;
	
	cout << "\n  A continuaci�n, responda a las siguientes preguntas con: "
		 << "S� (S) o No (N)." << endl;
	
	cout << "  �Tiene dificultad para respirar? -> ";
	cin >> diffiBreath;
		
	cout << "  �Padece de diabetes? -> ";
	cin >> diabetes;
	
	cout << "  �Padece alg�n tipo de c�ncer? -> ";
	cin >> cancer;

	// C�mputos.
	
	if (bodyTemp >= 38){
		if (diffiBreath == 'S' || 's'){
			if ((diabetes == 'S' || 's') || (cancer == 'S' || 's' )){
				cout << "\n\t Resultado: Consulte a las autoridades locales.";			
			}
		}
		else if (diabetes == 'S' || 's'){
			cout << "\n\t Resultado: Consulte a las autoridades locales.";			
		}
		else if (cancer == 'S' || 's' ){
			cout << "\n\t Resultado: Consulte a las autoridades locales.";				
		}
		else{
			cout << "\n\t Resultado: Cuarentena en su casa. ";
		}
	}
	else{
		cout << "\n\t Resultado: Test negativo.";
	}

	cout << "\n\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";	
}
