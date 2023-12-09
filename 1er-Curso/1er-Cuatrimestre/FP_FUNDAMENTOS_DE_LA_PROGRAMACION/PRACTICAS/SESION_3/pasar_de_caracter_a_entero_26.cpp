/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 05/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa en el que introducimos un n�mero en una variable de tipo
	"char" y nos devuelve ese mismo n�mero en una variable de tipo "int". 
	Para ello debemos de mirar la tabla ASCII y ver la relaci�n que existe
	entre un n�mero literal o car�cter y un n�mero entero.
*/

/*
	int entero;
	char caracter;
	
	cin >> caracter;
	entero = caracter;

	caracter = '7';
	entero = caracter;
	
	En este c�digo que nos proporciona el enunciado, el valor que se 
	almacenar�a en la variable entero seria 55 y no 7, que es el valor que
	queremos. 55 es el valor en la tabla ASCII de '7', por lo que si 
	queremos es mostrar ese n�mero de verdad, debemos de hacer lo 
	siguiente:
	
		55 - 7 = 48
	48 en la tabla ASCII corresponde con el '0', por lo que cada vez que 
	queramos obtener un n�mero, almacenado en una variable de tipo literal,
	y que no se nos asigne su valor de la tabla ASCII, debemos de restarle
	48 para obtener su valor.
	
	EL EJEMPLO SE PUEDE VER EN EL SIGUIENTE PROGRAMA: 

*/

#include <iostream>		//  Inclusi�n de recursos de E/S
#include <cmath>		//  Inclusi�n de recursos matem�ticos.
using namespace std;

int main(){
	
	cout << "\n\tPROGRAMA: 26. PASAR DE CAR�CTER A ENTERO. \n\n";
	
	int entero;
	char crter;
	
	cout << " Introduzca un n�mero: ";
	cin >> crter;
	
	entero = crter - 0;
	
	cout << "\n\t Ha introducido: " << crter << " (cin de un char) ";
	cout << " y ha obtenido " << entero << " (cout de un int).";
	
}

