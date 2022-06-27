#include<stdio.h>
int fibonacci(int n)
{
    int x1 = 1;
    int x2 = 1;
    printf("%d\n%d\n",x1,x2);
    for(int i = 0;i<n-2;i++)
    {
        int a = x1 + x2;
        x1 = x2;
        x2 = a;
        printf("%d\n",a);
    }
}
int main()
{
    fibonacci(20);
}