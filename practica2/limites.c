#include<limits.h>
#include<stdio.h>
#include<float.h>
int main()
{
	printf("\nINT: Min = %d Max = %d",INT_MIN, INT_MAX);  
	printf("\nCHAR: Min = %d Max = %d",CHAR_MIN, CHAR_MAX);  
  	printf("\nFLOAT: Min = %g Max = %g", FLT_MIN, FLT_MAX);   
  	printf("\nDOUBLE: Min = %e Max = %e", DBL_MIN, DBL_MAX);   
	printf("\nLONG INT: Min = %ld Max = %ld", LONG_MIN, LONG_MAX);
	printf("\n\n");
}
