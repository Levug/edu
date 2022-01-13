#include<stdio.h>
#define I 4
#define J 4
int main()
{
    int i, j, p;
    float A[I][J], B[I][J], V2[I][J];
    FILE *fp;
    fp=fopen("input.txt", "r");
    for (i=0;i<I;i++)
    {
        for (j=0;j<J;j++)
        {
            fscanf (fp,"%f ",&A[i][j]);
            B[i][j]=0;
        }
    }

    printf("\nA\n");    
    for ( i = 0; i < I; i++)// Выводим A
    {
        for ( j = 0; j < J; j++) 
        {
            printf("%.0f ", A[i][j]);
        } 
        printf("\n");
    }    

    for (p = 0; p <= I; p++)
    {
       for (i = p; i < I; i++) 
       {
           if (i == 0)
           {
               for ( j = 0; j < J; j++)
               {
                   B[i][j] = A[i][j];
               }
           }
           else
           {
                for (j = p - 1; j < J; j++);
                {
                    B[i][j] = A[i][j] - A[i][p - 1] / A[p - 1][p - 1] * A[p-1][j];
                }
           }     
       }   
    }

    printf("\nB\n");    
    for ( i = 0; i < I; i++)// Выводим B
    {
        for ( j = 0; j < J; j++) 
        {
            printf("%f ", B[i][j]);
        } 
        printf("\n");
    }    
    return 0;
}
