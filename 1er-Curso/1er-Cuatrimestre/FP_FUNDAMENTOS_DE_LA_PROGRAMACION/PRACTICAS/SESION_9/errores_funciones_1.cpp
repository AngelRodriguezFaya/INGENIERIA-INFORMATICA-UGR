/////////////////////////////////////////////////////////////////////////////
// Fundamentos de Programaci�n
// ETS Inform�tica y Telecomunicaciones
// Universidad de Granada
// Autor: �ngel Rodr�guez Faya
// Correo: arf04@correo.ugr.es
// Fecha de creaci�n: 10/12/2022																			
////////////////////////////////////////////////////////////////////////////

/*
	PROGRAMA 1: Corrige los errores.
	
	/* AS� SE MUESTRA LO QUE FALTA EN EL PROGRAMA O LAS ANOTACIONES. */
	


int Sumale1(/* int entero */)  /* Faltaba pasarle entero como par�metro */
{
	return entero + 1;
}

int Sumale1(int entero)
{
	entero = entero + 1;
	/* return entero */	/* Hay que poner return si no la funci�n no devuelve nada */ 
}

int ValorAbsoluto(int entero)
{
	if (entero < 0)
		entero = -entero;
		/* return entero */	/* Hay que poner return si no la funci�n no devuelve nada */ 
	else
		return entero;
}

bool EsPositivo(int valor)
{
	if (valor > 0)
		return true;
  /*else
  		return false;
  */
}
	
long ParteEntera(double real){	/* A ESTA FUNCI�N NO LE ENCUENTRO FALLOS */
	int parte_entera;
	parte_entera = trunc(real);
	return parte_entera;
}

// En esta funci�n lo que ocurre es que devuelve entero y despu�s lo suma.
int Sumale1(int entero)
{
	return entero + 1;
	/*return 1+entero */ /* As� si devuelve 6 y no 5 */ 
}
int main(){
	int n = 5;
	Sumale1(n);
	cout << n;
}
