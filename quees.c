#include<stdio.h>
int main()
{
	for(int i=1;i<=30;i++)
	printf(!(i&1)?"%d\n":"",i);
}
