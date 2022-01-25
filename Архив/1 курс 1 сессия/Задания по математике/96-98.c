#include<math.h>
#include<stdio.h>
factorial (int nu)
{
  int r;
  for (r = 1; nu > 1; r *= (nu--))
    ;
  return r;
}
int main()
{
    float Xfirst=1, Xsecond=2, n, Max;
    while(Xfirst<Xsecond)
    {
        Xfirst=pow(1000,n)/factorial(n);//pow(n,0.5)/(100+n);//pow(n,3)/pow(2,n);
        Xsecond=pow(1000,n+1)/factorial(n+1);//pow(n+1,0.5)/(100+n+1);//pow(n+1,3)/pow(2,n+1);
        n++;
    }
    n--;
    printf("Max=%f",Xfirst);
    printf("  Number=%f",n);
    printf("  First=%f",Xfirst);
    printf("  Second=%f",Xsecond);

    return 0;
}