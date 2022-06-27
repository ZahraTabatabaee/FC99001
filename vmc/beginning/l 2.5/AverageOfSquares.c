#include<stdio.h>
int average_of_squares0(float x)
{
    float sum = 0;
    for(float i=0;i<x;i++)
    {
        sum=sum+ i*i;
    }
    printf("%f",(sum/(x-1)));
}
int average_of_squares1(float x)
{
    float sum = 0;
    for(float i=0;i<=x;i++)
    {
        sum=sum+ i*i;
    }
    printf("%f",(sum/(x)));
}
int main()
{
    float x;
    printf("Enter your x :");
    scanf("%f",&x);
    // average_of_squares0(x);
    average_of_squares1(x);

}