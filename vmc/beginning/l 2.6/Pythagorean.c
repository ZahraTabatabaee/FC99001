#include<stdio.h>
int Pythagorean()
{
    for(int a=1;a<100;a++)
    {
        for(int b=1;b<100;b++)
        {
            for(int c=0;c<100;c++)
            {
                if((a<b)&&((a*a)+(b*b)==(c*c)))
                {
                    printf("%s%d %s%d %s%d\n","a =",a,"b =",b,"c=",c);
                }
            }
        }
    }
}
int main()
{
    Pythagorean();
}