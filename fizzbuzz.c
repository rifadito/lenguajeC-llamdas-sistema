/*FizzBuzz*/
/*Reyes Alberdo Fernando Practica 1*/
#include <stdio.h>
int main()
{
    int n;
    for(n=1;n<=30;n++)
    {	
		if(((n%3)==0)&&((n%5)==0))
            printf("\n%d FizzBuzz",n);
		else if((n%3)==0)
            printf("\n%d Fizz",n);
        else if((n%5)==0)
            printf("\n%d Buzz",n);	
        else
        	printf("\n%d",n);
    }
    return 0;
}
