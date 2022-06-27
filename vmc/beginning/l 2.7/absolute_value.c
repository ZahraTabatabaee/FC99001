#include<stdio.h>
int absolute_value(float x)
{
    if(x<0)
    {
        float a = -1*x;
        printf("%f",a);
    }
    if(x>=0)
    {
        printf("%f",x);
    }
}
int main()
{
    float x;
    printf("Enter your x :");
    scanf("%f",&x);
    absolute_value(x);
}