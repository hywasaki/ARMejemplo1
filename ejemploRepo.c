#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void intercambiar(int* num1, int*num2);


// algoritmo que compara los numeros dos a dos y recorre el arreglo
void ordenamiento_burbuja(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; i < n-1; j++)
        {
            printf("Comparando %d con %d \n", arr[j], arr[j+1]);
            if(arr[j]>arr[j+1]){
                intercambiar(&arr[j], &arr[j+1]);
            }
        }
        
    }
}


int main(){

    srand(time(NULL)); // genera numeros aleatorios

    int numeros_burbuja[100]; // creamos un arreglo de 100 datos

    printf("Arreglo inicial para burbuja: \n");
    for (int i=1 ; i < 100; i++)
    {
        numeros_burbuja[i]=rand()%100; // numeros aleatorios de 0 a 100 en el array 
        printf("%d", numeros_burbuja[i]); // imrpimimos el valor
    }
    return 0;

    printf("\n"); // salto de linea

    int numeros_insercion[100]; // creamos un arreglo de 100 datos

    printf("Arreglo inicial para la insercion: \n");
    for (int i=1 ; i < 100; i++)
    {
        numeros_insercion[i]=rand()%100; // numeros aleatorios de 0 a 100 en el array 
        printf("%d", numeros_insercion[i]); // imrpimimos el valor
    }
    printf("Ordenamiento burbuja: \n ");
    clock_t inicio_burbuja =clock(); // devuele la cantidad de ciclos desde que se inicia el programa
    // aque se ejecutara el algoritmo burbuja

    clock_t fin_burbuja = clock();
    double tiempo_burbuja=(double)(fin_burbuja-inicio_burbuja)/(CLOCKS_PER_SEC);
    // CLOCKS_PER_SEC es un constante que tiene la cantidad de cilos que genera nuestro procesador
    // la division nos da los segundos que se demora en ejecutrar nuestro algortimso

    printf("Ordenamiento insercion: \n ");
    clock_t inicio_insercion =clock(); // 
    clock_t fin_insercion = clock();
    double tiempo_insersion=(double)(fin_insercion-inicio_insercion)/(CLOCKS_PER_SEC);
    return 0;

}

void intercambiar(int* num1, int*num2){
    int temporal=*num1; 
    *num2=temporal;
}