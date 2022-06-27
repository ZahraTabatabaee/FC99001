#include<stdio.h>
int factorial(int n)
{
    long long int mul = 1;
    for(int i=1;i<=n;i++)
    {
        mul = mul*i;
    }
    printf("%lld", mul);
}
int main()
{
    int i;
    for( i=1;i<=20;i++)
    {
        printf("\n%d\t",i);
        factorial(i);
    }
}