#include <stdio.h>
#include <math.h>
factorial (int nu)
{
  int r;
  for (r = 1; nu > 1; r *= (nu--))
    ;
  return r;
}
int main()
{
    double y;
    /*float summ, x=12, y=1, n=1, e=-3;
    //scanf("X", &x);
    while (fabs(y)>=pow(10,e))
    {
        y=pow(-1,n+1)*(pow(x,2+n)*sin(n))/(factorial(3*n+2));
        summ=summ+y;
        n++;
    }
    printf("Summ = %f",summ);
    printf("  num = %f\n",n);
    printf("  y = %f\n",y);
    */
   y = factorial(12);
   printf("  y = %f\n",y);
    return 0;
}

