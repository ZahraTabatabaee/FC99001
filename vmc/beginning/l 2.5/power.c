#include<stdio.h>
long int power(int x, int y)
{
    int i ;
    int n = 1;
    for(i=1;i<=y;i++)
    {
        n= n*x;
    }
    return n;
    
}
int main()
{
    int x,y;
    printf("Enter your x,y :");
    scanf("%d,%d",&x,&y);
    printf("%d",power(x,y));
}