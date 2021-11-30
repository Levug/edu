/*Решение уравнения методом хорд*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
#define pi 3.141592653589793238462643
int main()
{
    setlocale(LC_ALL, ".1251");
    double a1, a2, b, funcA, funcB, eps = 1;
    int n = 0;
    b = 5.9;
    a1 = 5.8;
    funcB = tan((pi*b)/4)-b-3;
    while (eps > 5 * pow(10, -16))
    {
        funcA = tan((pi*a1)/4)-a1-3;
        a2 = a1 - funcA * (b - a1) / (funcB - funcA);
        //printf("fA = %f\n", funcA);
        //printf("fuB = %f\n", funcB);
        eps = fabs(a2 - a1) / 2;
        n++;
        printf("Корень %f  точность %f  итерация %d\n", a2, eps, n);
        a1 = a2;
    }
    printf("Результат x = %.16f\n", a1);
    return 0;
}