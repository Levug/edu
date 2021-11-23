#include<stdio.h>
#include<math.h>
int main()
{
    float  e=-3, y=1, n=1, sum;
    do
    {
        y=(pow(2*n,0.5)-1)/(2*pow(n,2)+1);
        sum=sum+y;
        n=n+1;
    } while (fabs(y)>=pow(10,e));
    printf("Summ = %f",sum);
    printf("  num = %f\n",n);
    printf("  y = %f\n",y);
    return 0;
}
