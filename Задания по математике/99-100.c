#include<math.h>
#include<stdio.h>
int main()
{
    float Xfirst=2, Xsecond=1, n, Max;
    while(Xfirst>Xsecond)
    {
        Xfirst=n+100/n;//pow(n,2)-9*n-100;
        Xsecond=(n+1)+100/(n+1);//pow(n+1,2)-9*(n+1)-100;
        n++;
    }
    n--;
    printf("Min=%f",Xfirst);
    printf("  Number=%f",n);
    printf("  First=%f",Xfirst);
    printf("  Second=%f",Xsecond);
    return 0;
}