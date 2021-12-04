/*/
Решение уравнения методом ксательных
/*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.141592653589793238462643

int main()
{
    setlocale(LC_ALL, ".1251");
    double a, x, funcA, funcB, eps = 1;
    int n = 1;
    a = 5.8;//  с этой точки проход в право
    while (eps >5* pow(10, -12))
    {
        funcB = tan((pi*a)/4)-a-3;
        funcA = (pi/(4*pow(cos((a*pi)/4), 2))) - 1;
        x = a - (funcB/funcA);
        eps = fabs(x - a) / 2;
        printf("Корень %f погрешность %f итерация %d\n", x, eps, n);
        a = x;
        n++;
    }
    puts("");
    printf("Ответ = %.16f\n",a);
}