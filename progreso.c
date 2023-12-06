#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int fila = 23, columna = 3;
    int i, j;
    
    int notasprogreso[fila][columna];
    srand(time(NULL)); // agregamos para que se puedan generar los numeros aleatorios del 0s-10
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            notasprogreso[i][j] = rand() % 11; // generamos numeros aleatorios entre 0-10 para la matriz notas progreso
        }
    }
    printf("\n");
    printf("La  primera columna es la nota del primer progreso\n");
    printf("La  segunda columna es la nota del segundo progreso\n");
    printf("La  tercera columna es la nota del tercer progreso\n");
    printf("\n");
    for (i = 0; i < fila; i++)
    {
        printf("notas del ESTUDIANTE %d:", i+1);//generamos el nobre o numero del estudiante
        for (j = 0; j < columna; j++)
        {
            

            printf("    %d", notasprogreso[i][j]); // imprimimos las notas de progreso
        }
        printf("\n");
        // Calcular el promedio de la fila
        int suma = 0;
        for (j = 0; j < columna; j++)
        {
            suma += notasprogreso[i][j];// se suma el numero de columnas 
        }
        float promedio = (float)suma / columna;//calculamos el promediodividiendo suma entre el numero de colmnas 

        printf("****Promedio del estudiante %d: %.2f ****", i + 1, promedio); // Imprimir el promedio de la fila con dos decimales  expresado en "%.2f"

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }

    return 0;
}
