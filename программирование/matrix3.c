/*/
3. Дан двумерный массив размером 3 на 5, вводимом с клавиатуры 
и состоящем из целых чисел,найти сумму отрицательных элементов в 
каждом столбце. 
Распечатать сам массив и найденные суммы в конце каждого столбца.
/*/
#include<stdio.h>
#define I 3
#define J 5
int main()
{
    int M[I][J], S[I], i, j, num;
    for ( i = 0; i < I; i++)
    {
        S[i]=0;
        for ( j = 0; j < J; j++, num++)
        {
            printf("Value %i = ", num);
            scanf("%i", &M[i][j]);
            if (M[i][j]<0)
            {
                S[i]=S[i]+M[i][j];
            }
            
        }
        
    }
    printf(" \n");
    for ( i = 0; i < I; i++)
    {
        for ( j = 0; j < J; j++)
        {
            printf(" %i",M[i][j]);
        }
        printf(" %i",S[i]);
        printf(" \n");
    }
    
    return 0;
}
