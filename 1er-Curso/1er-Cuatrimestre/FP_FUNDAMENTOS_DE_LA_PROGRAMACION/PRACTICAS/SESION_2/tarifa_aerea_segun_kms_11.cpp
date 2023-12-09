/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 28/09/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa que nos calcula el precio final de un billete de avi�n, habi�ndo
	introducido una tarifa base e ir sum�ndole seg�n la distancia al destino.
*/

#include <iostream>
using namespace std;

int main(){
	cout << "\n\tPROGRAMA: PRECIO DE UN BILLETE DE AVI�N. \n\n";
	
	const double TARIFA_BASE = 150.0;
	double dist, tarifa_fin;
	
	cout << "  Introduce la distancia a su destino (en kilometros): ";
	cin >> dist;
	
	tarifa_fin = TARIFA_BASE + (dist * 0.1);

	cout << "\n\t El precio final del billete es: " << tarifa_fin;
	
}
