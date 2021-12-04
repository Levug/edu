/*/
Решение уравнения комбинированным методом 
/*/

#include <stdio.h>
#include <math.h>
#include <locale.h>//........................................... дает возможность подключить русский язык (необходимо изменить кодировку на "Windows 1251")
#define pi 3.141592653589793238462643
int main()
{
    setlocale(LC_ALL, ".1251");//............................... подключает русский язык
    double a1,a2,b,b1,b2, funcA, funcA1,funcB1,funcB_pr, eps=1;
    int n = 0;
    b = b1 = 5.9;
    a1 = 5.8;
    funcA = tan((pi*b)/4)-b-3;//................................ используется в касательной, но константа
    while (eps > pow(10,-12))
    {
        funcB1 = tan((pi*b1)/4) - b1 - 3;//..................... используется в методе хорд
        funcA1 = tan((pi*a1)/4) - a1 - 3;//..................... используется в касательной
        funcB_pr = (pi/(4*pow(cos((a1*pi)/4), 2))) - 1;//....... производная для касательной
        b2 = b1 - (funcB1/funcB_pr);//.......................... касательная корень
        a2 = a1 - funcA1 * (b-a1) / (funcA-funcA1);//........... хорда корень
        eps = fabs(b1-a1)/2;//.................................. погрешность касательная - хорда
        n++;//.................................................. счетчик итераций
        printf("Корень %.12f погрешность %.12f итерация %d\n", b1, eps, n);
        a1 = a2;//.............................................. переназначение корня хорды
        b1 = b2;//.............................................. переназназначение корня касательной 
    }
    puts("");
    printf("Ответ = %.12f\n", a1);
}