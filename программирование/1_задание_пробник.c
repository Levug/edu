// Первое задание проверочной работы по программированию (зимняя сессия 20.01.2022)

#include <stdio.h>
#include <math.h>
__int64 fac(int num)
{
    int  i;
    __int64 k = 1;
    for (i = 1; num >= i ; i++)
    {
        k = i*k;
    }
    return k;
}
int main()
{
    int n = 1, S1;
    float x = 1, y1,c = 1, e = pow(10, -4);
    double y = 0.5, S = 0;
    while (fabs(y) > e)
    {
        y = pow(-1, (n+1))*pow(5+0.2*x, 2*(n-1))/(fac(2*n));
        S = S + y;
        printf("%i) y = %f\n", n, y);
        n++;
        
    }
    printf("S = %f", S);
    return 0;
}
