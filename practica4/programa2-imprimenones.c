/*Programa que imprime nones del 0 a n (n definda por el usuario)*/
#include<stdio.h>

int main()
{
        int n, i;
        printf("\nDame un numero: ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
	if(i%2!=0)   
	printf("%d\n",i);
        return 0;       
}
