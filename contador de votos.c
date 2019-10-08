/******************************************************************************
4. Los organizadores de un acto electoral solicitaron realizar un programa para manejar el conteo de votos. 
En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos entre 1 y 5. 
El programa debe obtener el número de votos de cada candidato y el porcentaje que obtuvo respecto al total de 
los votantes. Se ingresa los votos  de manera desordenada, el final de ingreso de los votos se representa 
por un cero.

Ejemplo

 INGRESO DE VOTOS:

2 5 5 4 3 5 1 2 4 3 1 2 4 5 0

2 representa un voto para el candidato2

5 representa un voto para el candidato5

4 representa un voto para el candidato4
*******************************************************************************/
#include <stdio.h>

void main()
{
    int voto,cantV1=0,cantV2=0,cantV3=0,cantV4=0,cantV5=0,totalVotos=0;
    float porV1=0,porV2=0,porV3=0,porV4=0,porV5=0;
    printf("Ingrese su voto:");
    scanf("%d",&voto);
    if(voto==1)
        cantV1++;
    else if(voto==2)
        cantV2++;
    else if(voto==3)
        cantV3++;
    else if(voto==4)
        cantV4++;
    else if(voto==5)
        cantV5++;
    totalVotos=cantV1+cantV2+cantV3+cantV4+cantV5;
    porV1=(cantV1/totalVotos)*100;
    porV2=(cantV2/totalVotos)*100;
    porV3=(cantV3/totalVotos)*100;
    porV4=(cantV4/totalVotos)*100;
    porV5=(cantV5/totalVotos)*100;
    printf("El candidato1 %d tiene un porcentaje %.2f\n",cantV1,porV1);
    printf("El candidato2 %d tiene un porcentaje %.2f\n",cantV2,porV2);
    printf("El candidato3 %d tiene un porcentaje %.2f\n",cantV3,porV3);
    printf("El candidato4 %d tiene un porcentaje %.2f\n",cantV4,porV4);
    printf("El candidato5 %d tiene un porcentaje %.2f",cantV5,porV5);
}
