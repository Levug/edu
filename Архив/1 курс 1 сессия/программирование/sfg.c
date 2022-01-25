int factorial(int num)
{
    int i, k=1;
    for (i=1;i<=num;i++)
    {
        k=k*i; 
    }
    return k;

}
int main()
{
    int Y;
    Y = factorial(12);
    printf("F=%d", Y);
    return 0;
}
