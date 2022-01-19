// Первое задание проверочной работы по программированию (зимняя сессия 20.01.2022)

#include <stdio.h>
#include <math.h>
fac(int num)
{
    int k = 1, i;
    for (i = 1; num > 1 ; num--)
    {
        k = num*k;
    }
    return k;
}
int main()
{
    int n = 1, S1;
    float x = 1, y = 1,y1,c = 1, S = 0, e = pow(10, -4);
    /*
    while (fabs(y) > e)
    {
        //y = pow(-1, n + 1)*(pow((5+0.2*x), 2*n - 1)/(fac(2*n)));
        y = pow(-1, (n+1))*pow(5+0.2*x, 2*(n-1))/(fac(2*n));
        S = S + y;printf("n=%i c = %f - %f = %f \n", n, y, y1, c);
        n++;
        
    }
    */

   S1 = fac(14);
    printf("S = %i", S1);

    return 0;
}
