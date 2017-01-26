#include<stdio.h>
#include<time.h>

void desdeinicio(void); 

void main()
{
	time_t tiempo = time(0);
	struct tm*tlocal = localtime(&tiempo);
	char salida[128];
	strftime(salida,128,"%d/%m//%y",tlocal);
	printf("Fecha: %s",salida);  
	desdeinicio();	
}

void desdeinicio ()
{
	time_t inicio;
	inicio = time (NULL);
	printf ("\n%d horas desde que nacio unix\n", inicio);
}
	
