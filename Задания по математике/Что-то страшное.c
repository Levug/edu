#include <stdio.h>
#include <math.h>
int main(void) {
    float e=0.1, xn=1, n=1;
    while (fabs(xn)>=e)
    {
        xn=pow(-1,n)*pow(0.999,n);//(2*n)/(pow(n,3)+1);
        n=n+1;
    }
    printf("%1f\n", n);
    float e1=0.001, xn1=1, n1=1;
    while (fabs(xn1)>=e1)
    {
        xn1=pow(-1,n1)*pow(0.999,n1);//(2*n1)/(pow(n1,3)+1);
        n1=n1+1;
    }
    printf("%1f\n", n1);
    float e2=0.0001, xn2=1, n2=1;
    while (fabs(xn2)>=e2)
    {
        xn2=pow(-1,n2)*pow(0.999,n2);//(2*n2)/(pow(n2,3)+1);
        n2=n2+1;
        printf("%1f\n", n2);
    }
    printf("%1f\n", n2);
    
}