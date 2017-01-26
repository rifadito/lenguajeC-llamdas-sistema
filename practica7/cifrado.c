#include<stdio.h>
int main()
{
	char cadena[]={'h','o','l','a'};
	char clave[] = {'a','d','i','o','s'};
	char cifrada;
	for(int i=0;i<5;i++)
	{
	cifrada = cadena[i]^clave[i];
	printf("%c",cifrada);
	}
}	
	
