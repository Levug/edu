#include<stdio.h>
#define N 4
#define M 4
int main()
{
    int i, j, p;
    float A[N][M], B[N][M];
    FILE *fp;
    fp=fopen("input.txt", "r");
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            fscanf (fp,"%f ",&A[i][j]);
        }
    }
    for (p = 0; p <= N; p++)
    {
        for (i = p; i < N; i++)
        {
            if (i == 0)
                for (j = 0; j < M; j++)
                {
                    B[i][j] = A[i][j];
                }
            else
                for (j = p - 1; j < M; j++)
                {
                    B[i][j] = A[i][j] - A[i][p -1] / A[p-1][p-1] * A[p-1][j];
                }
        }
    }
    printf("\nB\n");    
    for ( i = 0; i < N; i++)// Выводим B
    {
        for ( j = 0; j < M; j++) 
        {
            printf("%f ", B[i][j]);
        } 
        printf("\n");
    }    
    return 0;
}
