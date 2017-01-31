#include<stdio.h>
int main(){
	int opcion,l,b,h;
	printf("Selecciona una figura para obtener su area:\n");
	printf("1) Cuadrado\n2) Triangulo\n3) Rectangulo\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1:
	printf("Dame el valor de uno de sus lados: ");
	scanf("%d",&l);
	printf("El area del cuadrado es: %d\n",l*l);
	break;
	case 2:  
	printf("Dame el valor de su base: "); 
	scanf("%d",&b);
	printf("\nDame el valor de su altura: ");
	scanf("%d",&h); 
	printf("\nEll area de triangulo es: %d\n",((b*h)/2));
	break;
	case 3:
	printf("Dame el valor de su altura: "); 
	scanf("%d",&l); 
	printf("\nDame el valor de su base: ");
	scanf("%d",&b);
	printf("El area de rectangulo es: %d\n",l*b);
	break;
	}
}
