#include<stdio.h>
#include<math.h>
#define E 2.7182818284
int main()
{
    float  y=1, n=1, sum;
    do
    {
        y=(pow(2*n,0.5)-1)/(2*pow(n,2)+1);
        sum=sum+y;
        n++;
    } while (fabs(y)>=pow(10,-3));
    printf("Summ = %f",sum);
    return 0;
}
