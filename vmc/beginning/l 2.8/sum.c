#include<stdio.h>
int compute_sum(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    printf("N      compute_sum(N)\n");
    printf("---------------------\n");
    for(int x=9;x>0;x--)
    {
        printf("%d         %d\n",x,compute_sum(x));
    }
}