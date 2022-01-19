//2.
#include <stdio.h>
#include <math.h>
#define e 2.7
int main(){
    int x=9, a=3;
    float y;
if(x<=-20) 
 {
     printf("section1");
    y=cos(pow ( x ,5) );
    printf("% f", y);
 }
if (-20 < x, x <= -7){
   printf(" section2 ");
    y=atan( sin ( pow ( e , a*x ) ) );
     printf("% f", y);
}
 else {
     printf(" section3 ");
     y = pow(2,x)*tan(sqrt(fabs(log((x+7)/a))));
      printf("% f", y);
 }
}
//3.
#include <stdio.h>
#define N 4
#define M 5
int main(){
    float A[N][M]={1, 2, -6, 7, 5,
                 3, 5, -1, 1, 7,
                 4, 8, -4, 2, 1,
                 6, -3, 3, 5, 8};

float max[5]={0, 0, 0, 0, 0};
float y;
int i,j;
for (i=0; i<N; i++)
{
    for (j=0; j<M; j++)
    {
        if(max[j]<A[i][j])
        {
            max[j]=A[i][j];
        }
    }
}
for (i=0; i<N; i++)
{
    for (j=0; j<M; j++)
    {
        printf("% .0f", A[i][j]);  
    }
    printf("\n");
}

    for (j=0; j<M; j++)
    {
        y=y+max[j];
        printf("% .0f ", max[j]);
    }
y=y/M;
printf("\n %f",y);
}
//1.
#include <stdio.h>
#include <math.h>

int factorial (int num)
{
    int i,k=1;
    for (i=1;i<=num;i++)
    {
        k=k*i; 
    }
    return k;
}


int main(){
int n=1, x=1,g=0;
float y=1,s=0;
    //y=pow(-1,n+1)*pow(5+0.2*x, 2*n-1)/fac(2*n);
    while (fabs(y)>pow(10, -4))
    {
         y=pow(-1,(n+1))*pow(5+0.2*x, 2*(n-1))/factorial(2*n);
         n=n+1;
         s=s+y;
         g=g+1;
         printf(" summ =% f  y = % f, iteration = %d\n",s,y, g);
    }

}