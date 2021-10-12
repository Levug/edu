#include<stdio.h>
#include<Windows.h>
int main()
{
    int i=1000;
    while(i>7)
    {
        printf("%i-7=", i);
        i=i-7;
        printf("%i\n", i);
        Sleep(100);
    }
    return 0;
}
