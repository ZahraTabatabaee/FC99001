#include<stdio.h>
int print_left_triangle(int base)
{
    for(int i=1;i<=base;i++)
    {
        if(i%2==0)
        {
            for(int m=1;m<=i;m++)
                printf("&");
        }

        else
        {
            for(int m=1;m<=i;m++)
                printf("*");
        }
        printf("\n");
    }
}
int main()
{
    print_left_triangle(4);

}