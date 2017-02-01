#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a;
	char cadena[]={'h','o','l','a'};

	for (a=0;a<sizeof(cadena)/sizeof(char);a++)
	{
		printf("Caracter: %d Cifrado: %c Descifrado: %c",a+1,cadena[a]^2,cadena[a]^2^2);
		printf("\n");
	}  
}

