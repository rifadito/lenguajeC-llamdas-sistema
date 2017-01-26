//Practica 6
//"Hackea" este programa
#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int var1,var2,mayor;
	printf("Ingresa dos enteros sin signo(maximo %u):",UINT_MAX);
	scanf("%d",&var1);
	scanf("%d",&var2);
	printf((var1>var2)?"El mayor es %d\n":"El menor es %d",var1);
}
