/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 19/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa en el que introducimos un intervalo u un valor y nos 
	dice si ese valor est� dentro del intervalo o no. Para hacerlo, el 
	programa tiene que comprobar si se trata de un intervalo abierto, 
	cerrado � semi-. Despu�s comprueba los valores.
*/

#include <iostream>
using namespace std;

int main(){
   double cota_izqda, cota_dcha, valor;
   char car_izqda, car_dcha, car_coma;
   bool comprobar;
   
	cout << "\n\tPROGRAMA: 15 INTERVALOS \n ";
	
	cout << "\n  Introduzca el intervalo en el formato que se muestra "
		 << "(Por ejemplo: [-2.2,4.8]): ";
        
   cin >> car_izqda; 
   cin >> cota_izqda;
   cin >> car_coma; 
   cin >> cota_dcha;
   cin >> car_dcha; 
    
   cout << "\n  Introduzca un valor real: ";
   cin >> valor;

   if ((car_izqda == '(') && (car_dcha = ')')){
   		comprobar = ((cota_izqda < valor) && (valor < cota_dcha));
   }
   if ((car_izqda == '[') && (car_dcha = ')')){
   		comprobar = ((cota_izqda <= valor) && (valor < cota_dcha));
   }
   if ((car_izqda == '(') && (car_dcha = ']')){
   		comprobar = ((cota_izqda < valor) && (valor <= cota_dcha));
   }
   if ((car_izqda == '[') && (car_dcha = ']')){
   		comprobar = ((cota_izqda <= valor) && (valor <= cota_dcha));
   }
   
   if (comprobar){
   		cout << "\n\t El valor " << valor 
		   	 << " est� dentro del intervalo: "
		   	 << car_izqda << " " << cota_izqda << " " 
        	 << car_coma << " " << cota_dcha << " " 
			 << car_dcha << "\n";
   }
   else {
   		cout << "\n\t El valor " << valor 
		   	 << " no est� dentro del intervalo: "
		   	 << car_izqda << " " << cota_izqda << " " 
        	 << car_coma << " " << cota_dcha << " " 
			 << car_dcha << "\n";	
   }

}
