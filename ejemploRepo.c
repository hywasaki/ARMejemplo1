#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    srand(time(NULL)); // genera numeros aleatorios

    int numeros_burbuja[100]; // creamos un arreglo de 100 datos

    printf("Arreglo inicial para burbuja: \n")
    for (int= i ; i < 100; i++)
    {
        numeros_burbuja[i]=rand()%100; // numeros aleatorios de 0 a 100 en el array 
        printf("%d", numeros_burbuja[i]); // imrpimimos el valor
    }
    





}