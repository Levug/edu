//При заданных значениях x и параметре a вычислить значение функции F
#include<stdio.h>
#include<math.h>
#define E 2.7182818284
int main()
{
    float F, x = 9, a = -3;
    if (x <= -20)
    {
        F=cos(pow(x ,5));
        printf("section 1  ");
    }
    else if (-20 < x, x <= -7)
    {
        F=atan(sin(pow(E, a*x)));
        //printf("F = %f", sin(pow(E, a*x)));
        printf("section 2  ");
    }
    else
    {
        F=pow(2, x)*tan(sqrt(fabs(log((x+7)/a))));
        printf("section 3  ");
    }
    
    printf("F = %f", F);
    
    return 0;
}
