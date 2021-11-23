#include<stdio.h>
#include<math.h>
int main()
{   
    float  e=6, PiN=1, Pi=3, n, i=2;
    while(PiN>pow(10,-e))
    {
        PiN=4/((2+n)*(3+n)*(4+n));
        Pi=Pi+pow(-1,i)*PiN;
        n=n+2;
        i++;
        //printf("   PiN=%f", PiN);
        //printf("   Pi=%f\n", Pi);
    }
    printf("Pi=%f", Pi);
    //printf("   PiN=%f", PiN);
    //printf("   n=%f", n);
    printf("   i=%.0f", i);
    return 0;
}