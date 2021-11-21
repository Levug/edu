#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 2
#define M 2

int main()
{
    int R[N][M], B[N], i, j, min, diap=8;
    for ( i =0 ; i < 3; i++) // задаю матрицу  R
    {
        for ( j = 0; j < 3; j++)
        {
           /*
            printf("vvedite ellement matrici[%d][%d]", i, j);         
            scanf("%d", &R[i][j]); 
            printf("\n");
            */
            R[i][j]=rand()%diap;
        }
    }
    printf(6);
    for ( j = 0, i = 0; i < 3; j++)// задаю массив B крайне извращенным
    {
     if (R[i][j]<min)
        {
          B[i]=R[i][j];      
        }
     if (j=3)
     {
        i++;
        j=0;
     }
     
    }
    for ( i = 0; i < 2; i++)//вывожу массив В
    {
        printf(B[i]);
    }
    return 0;
}