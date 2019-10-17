/******************************************************************************
Realizar un programa que permita generar la serie de n numeros
*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador=1,num,suma=0;
    printf("cuantos numeros va a ingresar");
    scanf("%d",&num);
    for(contador=1;contador<=num;contador++)
    {
        suma=suma+contador;
        printf("%d\n",contador);
    }
    printf("La suma de %d numeros es de %d\n",num,suma);
}
