/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 20/10/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	8. [Tabulaci�n] . Indique si los siguientes trozos de c�digo est�n 
	correctamente tabulados	seg�n las normas indicadas en clase. En caso 
	de que no lo est�n, re-escr�balos:
*/

// ESTO S�LO ES UN ARCHIVO DE C�MO QUEDAR�AN ESTAS CONDICIONES BIEN INDENTADAS
// POR ESO NO HE PUESTO iostream NI using namespace std NI int main(){}.

//a)
	if (edad > 18){
		es_mayor_edad = true;		
	}
	else{
		es_mayor_edad = false;
	}

//b) 

	if (edad > 18){
		if (ingresos <= MAX_INGRESOS){
			suscept_ayuda = true;
		}
		else{
		suscept_ayuda = false;
		}
	}
	else if (ingresos > MIN_INGRESOS){
		suscept_ayuda = true;
	}
	else{
		suscept_ayuda = false;
	}

