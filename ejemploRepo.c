#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void intercambiar(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


// algoritmo que compara los numeros dos a dos y recorre el arreglo
void ordenamiento_burbuja(int arr[], int n)
{
    for(int i = 0; i < n-1;  i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            printf("Comparando %d con %d \n", arr[j], arr[j + 1]);
            if(arr[j] > arr[j + 1])
            {
                intercambiar(&arr[j], &arr[j+1]);
            }
        }
    }
}

void ordenamiento_insercion(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int valor_actual = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > valor_actual)
        {
            printf("Comparando %d con %d \n", arr[j], valor_actual);
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = valor_actual;
    }
}

int main()
{
    srand(time(NULL));// genera numeros aleatorios

    int numeros_burbuja[100];// creamos un arreglo de 100 datos

    printf("Arreglo inicial para burbuja : \n");
    for(int i = 1; i < 100; i++)
    {
        numeros_burbuja[i] = rand() % 100;// numeros aleatorios de 0 a 100 en el array 
        printf("%d ",numeros_burbuja[i]);
    }
    
    printf("\n");

    int numeros_insercion[100];// creamos un arreglo de 100 datos

    printf("Arreglo inicial para insercion : \n");
    for(int i = 1; i < 100; i++)
    {
        numeros_insercion[i] = rand() % 100; // numeros aleatorios de 0 a 100 en el array 
        printf("%d ",numeros_insercion[i]);
    }
    printf("\n");

    int n = sizeof(numeros_burbuja)/ sizeof(numeros_burbuja[0]);

    printf("Ordenamiento burbuja : \n");
    clock_t inicio_burbuja = clock();// devuele la cantidad de ciclos desde que se inicia el programa

    // Aqui se ejecutaara el algoritmo burbuja
    ordenamiento_burbuja(numeros_burbuja,n);
    clock_t fin_burbuja = clock();
    double tiempo_burbuja = (double)(fin_burbuja - inicio_burbuja)/CLOCKS_PER_SEC;
    // CLOCKS_PER_SEC es un constante que tiene la cantidad de cilos que genera nuestro procesador
    // la division nos da los segundos que se demora en ejecutrar nuestro algortimso


    printf("Ordenamiento insercion : \n");
    clock_t inicio_insercion = clock();
    // Aqui se ejecutaara el algoritmo insercion
    ordenamiento_insercion(numeros_insercion,n);
    clock_t fin_insercion = clock();
    double tiempo_insercion = (double)(fin_insercion - inicio_insercion)/CLOCKS_PER_SEC;

    printf("\n Arreglo ordenado con burbuja : ");
    for(int i = 1; i < 100; i++)
    {
        printf("%d ",numeros_burbuja[i]);
    }
    printf("\n El tiempo de ejecucion de Burbuja : %f segundos \n",tiempo_burbuja);

    printf("\n Arreglo ordenado con insercion : ");
    for(int i = 1; i < 100; i++)
    {
        printf("%d ",numeros_insercion[i]);
    }
    printf("\n El tiempo de ejecucion de Insercion : %f segundos \n",tiempo_insercion);

    printf("Nuevo cambio realiado");
    return 0;
}