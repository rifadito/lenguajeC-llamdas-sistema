/*Programa que calcule areas y muestre todos los datos pedidos y obtenidos*/
#include<stdio.h>
#include<math.h>

int triangulo(void)
int rectangulo(void)

int main ()
{
case 1: /*Triangulo*/
       system("cls");
       printf(". . : : AREA DE UN TRIANGULO : : . .");
       printf("\nDame el valor de su base: ");
       scanf("%f",&base);
       printf("\nDame el valor de su altura: ");
       scanf("%f",&altura);
       while(base<=0||altura<=0)
        {
        printf("\nERROR: Solo se admiten valores positivos");                         
        printf("\n\nDame el valor de su base: ");
        scanf("%f",&base);
        printf("\nDame el valor de su altura: ");
        scanf("%f",&altura);
        }
       area=(base*altura)/2;
       printf("\nEl area del triangulo es: %f unidades^2\n",area);
       nareas[i]=area;
       break;
case 2:
        system("cls");
        printf("AREA DE UN RECTANGULO");   
        printf("\nDame el valor de su base: ");
        scanf("%f",&base);
        printf("\nDame el valor de su altura: ");
        scanf("%f",&altura);
       while(base<=0||altura<=0)
        {
        printf("\nERROR: Solo se admiten valores positivos");                         
        printf("\n\nDame el valor de su base: ");
        scanf("%f",&base);
        printf("\nDame el valor de su altura: ");
        scanf("%f",&altura);
        }
        area=base*altura;
        printf("\nEl �rea del rectangulo es: %f unidades^2\n",area);
        nareas[i]=area;
        break;
case 1:
        system("cls");
        printf("AREA DE UN CUADRADO");   
        printf("\nDame el valor de uno de sus lados: ");
        scanf("%f",&lado);
        while(lado<=0)
        {
        printf("\nERROR: Solo se admiten valores positivos");
        printf("\n\nDame el valor de uno de sus lados: ");
        scanf("%f",&lado);
        }
        area=pow(lado,2);
        printf("\n\nEl area del cuadrado es: %f unidades^2\n",area);
        nareas[i]=area;
        break;
}

