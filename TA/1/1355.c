#include<stdio.h>
int print(int a)
{
    for (int i = 0; i < a; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int a = 10;
    print(a);
}
