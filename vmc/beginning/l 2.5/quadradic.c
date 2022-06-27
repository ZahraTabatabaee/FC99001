#include<stdio.h>
#include<math.h>
int quadradic(int a, int b, int c)
{
    int d = (pow(b,2)-4*a*c);
    if (d<0)
        printf("This equation has no real answer");
    if (d==0)
    {
        int x = (-b/(2*a));
        printf("%d",x);
    }
    if (d>0)
    {
        int x1 = ((-b + sqrt(d))/(2*a));
        int x2 = ((-b - sqrt(d))/(2*a));
        printf("%d\t%d",x1,x2);
    }

}
int main()
{
    // int a,b,c; 
    // printf("Enter your a, b, c:");

    // scanf("%d%d%d",&a,&b,&c);
    
    quadradic(1,-5,6);



}