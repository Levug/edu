#include<stdio.h>
#include<math.h>
int main()
{
    float a1, a2, b, funcA, funcB, eps = 1;
    int n = 0;
    b = 1,5;
    a1 = 0.5;
    funcB = b - 3 * pow(cos(1.04*b),2);
    while (eps > 5 * pow(10, -8))
    {
        funcA = a1 -3 * pow(cos(1.04 *a1), 2);
        a2 = a1 - funcA * (b - a1) / (funcB - funcA);
        eps = fabs(a2 - a1) / 2;
        n = n + 1;
        printf("Root %f, accurace %f, iteration %d\n", a2, eps, n);
        a1 = a2;
    }
    printf("Solve is x = %f\n", a1);
    return 0;
}
