#include<stdio.h>
int compute_change(int x)
{
    if (x<100)
    {
        int y = 100-x;
        int q = y/25;
        printf("%d,%s\n",q , "Quarter");
        int d = (y-q*25)/10;
        printf("%d,%s\n",d , "dime");
        int n = (y-q*25-d*10)/5;
        printf("%d,%s\n",n , "nickel");
        int p = (y-q*25-d*10-n*5);
        printf("%d,%s\n",p , "Penny");

    }
}
int main()
{
    int x;
    printf("Enter your x :");
    scanf("%d",&x);
    compute_change(x);
}