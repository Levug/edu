//При заданных значениях x и параметре a вычислить значение функции F
#include<stdio.h>
#include<math.h>
int main()
{
    float F, x = -2, a = -3;
    if (x < 2)
    {
        F=pow(x/(2*a), 2)+pow(7+x, 1.0/3.0)-sin(3*x+1);
        printf("section 1  ");
    }
    else if (x == 6)
    {
        F=cos(x/4)-atan(x+5)+log(6*x);
        //printf("F = %f", sin(pow(E, a*x)));
        printf("section 2  ");
    }
    else
    {
        F=tan(11+ x )-fabs(a*x);
        printf("section 3  ");
    }
    
    printf("F = %f", F);
    
    return 0;
}
