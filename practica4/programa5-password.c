#include <stdio.h>
int main(void)
{
	char CONTRASENA[] ="hola123";
	int numIntentos =3;
	int i;
	char contrasena[100];
	for (i=0; i<numIntentos; i++) 
	{
		printf("Password: ");
		scanf("%s", contrasena);
		if (strcmp(CONTRASENA, contrasena) != 0)
		{
			printf("\tGTFOH\n");
			continue;
		}
		printf("\nOK\n");
	break;
	}
	if (i == numIntentos)
	{
	printf("\nAUNTENTICACION FALLIDA\n");
	return 1;
	}
	printf("\nAUNTENTICADO\n");
	return 0;
}
