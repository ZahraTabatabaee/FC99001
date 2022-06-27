#include<stdio.h>
int sum(int n)
{
    int sum = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum = sum +i;
    }
    printf("%d",sum);
}
int main()
{
    int x;
    printf("Enter your x :");
    scanf("%d",&x);
    sum(x);
}