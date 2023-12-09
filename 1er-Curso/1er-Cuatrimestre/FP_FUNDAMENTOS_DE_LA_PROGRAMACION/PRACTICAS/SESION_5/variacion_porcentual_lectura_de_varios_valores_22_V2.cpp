/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 26/10/2022
////////////////////////////////////////////////////////////////////////////

/*
	ESTE EJERCICIO ES UNA AMPLIACI�N DEL EJER 7.[VARIACI�N PORCENTUAL]
	Programa que calcula la variaci�n porcentual de un producto introduciend�le
	el valor inicial y el valor final del producto. Adem�s, en este programa 
	podremos calcular la variaci�n porcentual de todos los pares que queramos
	hasta que le introduzcamos un valor negativo en la variable: valor_ini.
	
	V2, igual que el V1 pero hago una lectura anticipada de la variable y si 
	es positiva entro al bucle y si es negativa no entro, de esta forma me 
	ahorro utilizar el condicional if qu ehe utilizado en la V1.
*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 22. VARIACI�N PORCENTUAL: LECTURA DE VARIOS VALORES";
	cout << endl;	
	
	// Declarar las variables.
	
	double valor_ini;	
	double valor_fi = 0.0;
	double vari_porcen = 0.0;
	
	// Entrada de datos, c�mputos y salida de datos.
	
	cout << "\n  Para continuar, introduzca el valor inicial del producto."
		 << " Para finalizar, introduzca un valor negativo --> ";
	cin >> valor_ini;
	
	while(valor_ini >= 0){
		cout << "  Introduzca el valor final del producto: ";
		cin >> valor_fi;
		vari_porcen = abs(100*((valor_fi - valor_ini)/valor_ini));
		cout << "\n\t  La variaci�n porcentual es: " << vari_porcen << "%";
		cout << endl;
	}

	
	cout << "\n  Fin del programa. Vuelva pronto :)" << endl;
	cout << "  Programa de �ngel Rodr�guez Faya. ";		
}
