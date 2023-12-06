#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float pmayor(int fila, int columna, int notasprogreso[][columna])
{
    float notaMayor = 0.0;
    int estudianteMayor = 0; // generamos una variable para el estudiante mayor

    for (int i = 0; i < fila; i++)
    {
        int suma = 0;
        for (int j = 0; j < columna; j++)
        {
            suma += notasprogreso[i][j]; // sumamos la notas de progreso de cada fila
        }
        float promedio = (float)suma / columna; // promedio de cada estudiante
        if (promedio > notaMayor)
        {
            notaMayor = promedio;
            estudianteMayor = i + 1; // actualiza el numero del estudiante con el promedio  mas alto
        }
    }

    printf("El estudiante con el promedio mas alto es el numero %d\n", estudianteMayor);

    return notaMayor;
}

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
    printf("La primera columna es la nota del primer progreso\n");
    printf("La segunda columna es la nota del segundo progreso\n");
    printf("La tercera columna es la nota del tercer progreso\n");
    printf("\n");
    for (i = 0; i < fila; i++)
    {
        printf("Notas del ESTUDIANTE %d:", i + 1); // generamos el nombre o numero del estudiante
        for (j = 0; j < columna; j++)
        {
            printf("    %d", notasprogreso[i][j]); // imprimimos las notas de progreso
        }
        printf("\n");
        // Calcular el promedio de la fila
        int suma = 0;
        for (j = 0; j < columna; j++)
        {
            suma += notasprogreso[i][j]; // se suma el numero de columnas
        }
        float promedio = (float)suma / columna; // calculamos el promedio dividiendo suma entre el numero de columnas

        printf("****Promedio del estudiante %d: %.2f ****", i + 1, promedio); // Imprimir el promedio de la fila con dos decimales expresado en "%.2f"

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }
    pmayor(fila, columna, notasprogreso); // llamamos a la funcion -qmayor- para que imprima el estudiante con el promedio mas alto

    return 0;
}
