#include<stdio.h>
int factorial(int n)
{
    long long int mul = 1;
    for(int i=1;i<=n;i++)
    {
        mul = mul*i;
    }
    return mul;
}
int main()
{
    int x;
    printf("Enter your x :");
    scanf("%d",&x);
    printf("%d",factorial(x));
}