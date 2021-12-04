#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
double b,a1,b1,b2,a2, funcA, funcB1,funcB2,funcB3, e1;
int n=0;
b1=1.6;
b=1;
a1 =1.3;
funcB1=2 * log(b) - 1/b;
while (e1 > 5* pow(10,-8))
{
funcB2=2 * log(b1) - 1/b1;
funcA = 2 * log( a1 )- 1/a1;
funcB3= 2 /b1 + 1 / pow(b1,2);
b2 = b1 - funcB2/funcB3;
a2 = a1 - funcA * (b-a1) / (funcB1-funcA);
n = n+1;
e1=fabs(b1-a1/2);
printf("Root %f, eps = %2.10f\n, iteration%d\n, ", b2,e1,n );
a1 = a2;
b1=b2;
}

printf("Solve is x=%2.10f\n", a1);
}
