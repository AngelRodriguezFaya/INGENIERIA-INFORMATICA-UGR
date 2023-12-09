/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 10/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 20: Corrige los errores en las funciones de tipo VOID.
	
	/* AS� SE MUESTRA LO QUE FALTA EN EL PROGRAMA O LAS ANOTACIONES. */
	

void Imprime(double valor)
{
	/* double valor; Esto sobra ya que 'valor' ya se le pasa como par�metro */
	cout << valor;
}

void Cuadrado (int entero)
{
	/* return entero*entero; Esto est� mal ya que la funci�n void no devuelve nada */
	/* Habr�a que poner :
	cout << entero*entero; */
}


int Cuadrado (int entero)
{
	entero = entero*entero;
}

/* Para empezar, est� funci�n no es de tipo void, sino int, por lo que necesita
	un return para devolver el valor. 
	
	Si fuera de tipo void no necesitar�a el return. Si queremos mostrar el
	resultado, quedar�a tal que as�:
	
	void Cuadrado (int entero){
		entero = entero*entero;
		cout << entero;
	}
*/
