#include<stdio.h>
int CToF(float n)
{
    float x = ((9*n/5) -32);
    printf("%.2f", x);
}
int main()
{
    int x;
    printf("Enter your x :");
    scanf("%d",&x);
    CToF(x);
}