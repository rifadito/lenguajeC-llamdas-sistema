#include<stdio.h>

int factorial(int f);

int main()
{
	int f;
	printf("Ingresa un numero para obtener su factorial: ");
	scanf("%d",&f); 
	printf("El factorial de %d es: %d\n",f,factorial(f));
}

int factorial(int f)
{
	int d=1,i;
	for (i=f;i>1;i--)
	{  
     		d=d*i;
	}
	return (d);

}
