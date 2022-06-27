#include<stdio.h>
#include<stdbool.h>
int factorial(int *n)
{
    long long int mul = 1;
    for(int i=1;i<=*n;i++)
    {
        mul = mul*i;
    }
    return mul;
}
int main()
{
    int n ;
    // printf("%d",factorial(&n));
    printf("enter your number :");
    scanf("%d", &n);
    printf("factorial of %d is %d",n,factorial(&n));

}