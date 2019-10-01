/******************************************************************************
Realizar un programa en C que determine el area del circulo
*******************************************************************************/
#include <stdio.h>//definicion de biblioteca
#include<math.h>
#define pi 3.1416//Definicion de constante PI 

void main()//Definicion de la funcion principal
{//Inicio 
    float radio,area=0;//Declaracion de variables
    printf("Ingrese el radio");//Salida en pantalla
    scanf("%f",&radio);//Lectura de la variable radio
    //area =pi*radio*radio;//proceso
    area=pi*pow(radio,2);
    printf("El area es %.1f",area);//Salida del valor de la variable area
}//Fin 

