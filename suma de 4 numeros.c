/******************************************************************************
suma de 4 numeros
*******************************************************************************/
#include <stdio.h>

int main()
{
    int suma=0,contador=1,num,cantNum;
    printf("Cuantos numeros va a ingresar");
    scanf("%d",&cantNum);
    while(contador<=cantNum)
    {
        printf("Ingrese un  numero");
        scanf("%d",&num);
        suma=suma+num;
        contador++;
    }
    printf("la suma de %d es de %d\n",suma,cantNum);
}
