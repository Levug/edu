#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 2
#define M 2

int main()
{
    int R[N][M], B[N], i, j, diap=9;
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
    j=0;// обнуляю счетчик j, не спрашивай зачем
    for ( i = 0; i < 3; i++)// задаю массив B
    {
        if (R[i][j]>R[i][j+1])// тут начинется цирк, но должно сработать
        {
            if (R[i+1][j]>R[i][j+2])
            {
                B[i]=R[i][j+2];
            }    
            else
            {
                B[i]=R[i][j+2];
            } 
        }  
        else
        {
            B[i]=R[i][j];
        }  
    
    }
    for ( i = 0; i < 2; i++)//вывожу массив В
    {
        printf(B[i]);
    }
    return 0;
}
