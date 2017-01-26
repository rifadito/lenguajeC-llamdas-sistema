/* Numeros Primos 0 a n (n definida por usuario) */
#include<stdio.h>

int main()
{
        int n, i, j;
	int contador = 0;	
        printf("\nDame un numero: ");
        scanf("%d",&n);
        for(i=2;i<=n;i++) //1 no es primo, empezamos en 2
       	{
		for(j=2;j<i;j++) //dividir j entre numeros del 1 a n
		{
			if(i%j==0) //si num1 modulo de j es 0 => a+1
			contador++;
		}
		if(contador==0)
		{
			printf("%d\n",i);
		}
		contador=0;
	} 
}

