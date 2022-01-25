//
//   1.	Дан массив R(N,M). Сформировать одномерный
//   массив В(N) из минимальных элементов массива R по строкам.
//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    printf("\n");
    int R[3][3], B[3], i, j, min=666, diap=187;
    for (i=0; i<3; i++) // задаю матрицу  R
    {
        for (j=0; j<3; j++)
        {
            R[i][j]=rand()%diap;
        }
    }
    printf("Matrix R:\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }   
    for (j=0, i=0; i<3; j++)// задаю массив B крайне извращенным методом
    {
        if (R[i][j]<min)
        {
          min=R[i][j];      
        }        
        if (j==2)
        {
            B[i]=min;
            i++;
            j=0;
            min=666;
        }     
    }
    printf("\n");
    printf(" Array B:\n");
    for (i=0; i<3; i++)//вывожу массив В
    {
        printf(" %i", B[i]);
    }
    return 0;
}