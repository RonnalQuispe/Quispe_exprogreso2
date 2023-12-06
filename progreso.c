#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int fila=23, columna=3;
    int i,j;
    int numalumnos=1;//variable para generar numeros del 1-23
    int notasprogreso[fila][columna];
    srand(time(NULL));// agregamos para que se puedan generar los numeros aleatorios del 0s-10
    for ( i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            notasprogreso[i][j] =rand() % 11; // generamos numeros aleatorios entre 0-10 para la matriz notas progreso
        }
        
    }
    printf("\n");
    printf("La  primera columna es la nota del primer progreso\n");
    printf("La  segunda columna es la nota del segundo progreso\n");
    printf("La  tercera columna es la nota del tercer progreso\n");
    printf("\n");
    for (i = 0; i < fila; i++)
    {
        
        
        for (j = 0; j < columna; j++)
        {
            printf("    %d", notasprogreso[i][j]); // imprimimos las notas de progreso
        }
        printf("\n");
       
    }
    
    return 0;
}
