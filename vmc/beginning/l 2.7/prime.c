#include<stdio.h>
#include<stdbool.h>

int is_divisible(int a,int b)
{
    if (a % b == 0)
        return true;
    else
        return false;
}
int is_prime(int number)
{
    for(int i=2;i<number;i++)
    {
        if(is_divisible(number,i))
        {
            return false;
        }   
    } 
    if (number<=1)
    {
        return false;
    }
    printf("%d\n",number);
}
int main()
{
    // int x,y;
    // printf("Enter your x,y :");
    // scanf("%d,%d",&x,&y);
    // is_divisible(x,y);
    for(int n=2;n<100;n++)
    {
        is_prime(n);
    }
}