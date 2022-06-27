#include<stdio.h>
int FToC(float n)
{
    float x = (n-32)*5/9;
    printf("%.2f", x);
}
int main()
{
    int x;
    printf("Enter your x :");
    scanf("%d",&x);
    FToC(x);
}