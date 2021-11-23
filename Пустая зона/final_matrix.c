#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int R[3][3], B[3], i, j, min, diap=8;
    for (i=0; i<3; i++) // задаю матрицу  R
    {
        for (j=0; j<3; j++)
        {
            //R[i][j]=rand()% diap+1;
            printf("vvedite ellement matrici[%d][%d]", i, j);
            scanf("%d", &R[i][j]);
            printf("\n");
        }
    }
    for (j=0, i=0; i<3; j++)// задаю массив B крайне извращенным методом
    {
        if (R[i][j]<min)
        {
          B[i]=R[i][j];      
        }
        if (j==3)
        {
            i++;
            j=0;
        }     
    }
    for (i=0; i<2; i++)//вывожу массив В
    {
        printf(B[i]);
    }
    return 0;
}