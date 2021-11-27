#include<stdio.h>
#include<math.h>
#define I 4
#define J 5
int main()
{
    int M[4][5], i, j, num;
    float powed, summed;
    for ( i = 0; i < I; i++)//Вводим матрицу М заодно считая квадраты
    {
        for ( j = 0; j < J; j++)
        {
            printf("value %d = ", num);
            scanf("%d", &M[i][j]);
            num++;
            if (M[i][j]<0)
            {
                powed=pow(fabs(M[i][j]),2);
                summed=summed+powed;
                //printf("X = %d\n", M[i][j]);
                //printf("X^2 = %f\n", powed);
                //printf("Summ = %f\n", summed);
            }            
        }
        
    }
    printf("\n");
    printf("Matrix %dx%d: \n", I, J);//Выводим матрицу М
    for ( i = 0; i < I; i++)
    {
        for ( j = 0; j < J; j++)
        {
            printf("%d ", M[i][j]);        
        }
        printf("\n"); 
    }
    printf("\n");
    printf("Summ = %.0f", summed);    
    return 0;
}
