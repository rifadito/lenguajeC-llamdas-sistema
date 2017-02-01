#include<stdio.h>
int main()
{
	char cadena[]={'h','o','l','a'};
	char clave[] = {'a','d','i','o'};
	char cifrada[3];
	int i;
	for(i=0;i<3;i++)
	{
	cifrada[i] = cadena[i]^clave[i];
	printf("%c",cifrada);
	}
}		
