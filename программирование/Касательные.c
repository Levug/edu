/*Решение уравнения методом касательных*/

#include <stdio.h>
#include <math.h>
#include<locale.h>
#define pi 3.141592653589793238462643
int main()
{
    setlocale(LC_ALL, ".1251");
    float b,a1,b1,b2,a2, funcA, funcB1,funcB2,funcB3, eps=1;
    int n=0;
    b1=5.9;
    b=b1;
    a1 =5.8;
    funcB1 = tan((pi*b)/4)-b-3;
    while (eps > 5* pow(10,-8))
    {
        funcB2 = tan((pi*b)/4)-b-3;
        funcA = tan((pi*a1)/4)-a1-3;
        funcB3= (pi/(4*pow(cos((b1*pi)/4), 2)))-1;
        b2 = b1 - funcB2/funcB3;
        a2 = a1 - funcA * (b-a1) / (funcB1-funcA);
        eps=fabs(b2 - b1) / 2;
        n++;
        printf("Корень %f  Точность = %f  Итерация %d\n", a2, eps, n );
        a1 = a2;
        b1 = b2;
    }
    puts("");
    printf("Ответ = %.16f", a1);
}