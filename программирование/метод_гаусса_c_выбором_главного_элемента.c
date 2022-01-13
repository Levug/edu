#include<stdio.h>
#define I 4
#define J 4
int main()
{
    int M[I][J], i, j, t, k;
    for ( i = 0; i < I; i++)
    {
        for ( j = 0; j < J; j++)
        {
            //scanf("%d", &M[i][j]);
            M[i][j] = rand()%60;           
        }
        if (M[i][0]>t)
        {
            t=M[i][0];
            k=i;
        }
    }
    for ( i = 0; i < I; i++)
    {
        for ( j = 0; j < J; j++) 
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("%d ", k);
    printf("  %d ", M[k][0]);    
    return 0;
}