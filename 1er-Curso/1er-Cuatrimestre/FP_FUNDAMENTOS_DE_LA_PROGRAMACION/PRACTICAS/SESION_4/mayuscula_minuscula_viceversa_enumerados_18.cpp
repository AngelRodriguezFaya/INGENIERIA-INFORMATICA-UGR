/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 19/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	Programa en el quedebemos introducir un car�cter y ver si est� en 
	may�scula o min�scula a trav�s de unos condicionales. Si es may�scula
	debemos trnasformarla a min�scula o al contrario, de min�scula a 
	may�scula.
*/

/*
	A 65	a 97
	B 66	b 98
	C 67	c 99
	D 68	d 100
	E 69	e 101
	F 70	f 102
	G 71	g 103
	  . 	  .
	  .		  .
	  .		  .
	  
	Como vemos la diferencia entre may�sculas y minusculas es 32, y es 
	siempre constante.
*/

#include <iostream>
using namespace std;

enum class TipoLetra
	{mayus, minus, no_alfb};
	
int main(){
	
	cout << "\n\tPROGRAMA: 18 MAY�SCULA A MIN�SCULA Y VICEVERSA USANDO";
	cout << "UN ENUMERADO. \n\n";
	
	const int DIST_MAYUS_MINUS = 'a' - 'A';  // Su valor es 32.
	char letra_org, letra_fin;      //Las variables son char porque son letras.
	TipoLetra tipo_letra;
	
	//Entrada de datos:
	
	cout << " Introduzca la letra: ";
	cin >> letra_org;
	
	//C�mputos:
	
	if (('A' <= letra_org) && (letra_org <= 'Z')){
		letra_fin = letra_org + DIST_MAYUS_MINUS;
		tipo_letra = TipoLetra::mayus;
	}
	else if (('a' <= letra_org) && (letra_org <= 'z')){
		letra_fin = letra_org - DIST_MAYUS_MINUS;
		tipo_letra = TipoLetra::minus;
	}
	else{
		tipo_letra = TipoLetra::no_alfb;
	}
	
	//Salida de Resultados.
	
	cout << "\n\n";
	
	switch (tipo_letra){
		case TipoLetra::mayus:
			cout << "\t La letra era may�scula. ";
			cout << "Una vez convertida es: " << letra_fin;
			break;
				
		case TipoLetra::minus:
			cout << "\t La letra era min�scula. ";
			cout << "Una vez convertida es: " << letra_fin;
			break;
				
		case TipoLetra::no_alfb:
			cout << "\t El car�cter no era una letra. " << letra_fin;
			break;
	}
	
	cout << "\n";

/* �Cu�l ser�a el inconveniente de usar dos variables de tipo bool?

	El inconveniente ser�a que con 2 variables tendr�amos 4 opciones y 
	yo s�lo necesito 3 opciones. Adem�s resultar�a m�s dif�cil ya que los
	valores del bool son true/false � 0/1 � s�/no, etc.
	
*/

}

