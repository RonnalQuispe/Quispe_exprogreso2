#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int fila=23, columna=3;
    int i,j;
    int notasprogreso[fila][columna];
    for ( i = 0; i < fila; i++)
    {
        for (j = 0; i < columna; i++)
        {
            notasprogreso[i][j] =rand() % 10+1; // generamos numeros aleatorios entre 1-10 para la matriz notas progreso
        }
        
    }

    
    return 0;
}
