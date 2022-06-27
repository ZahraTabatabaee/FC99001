#include<stdio.h>
int print_left_triangle(int base)
{
    int i,j ;
    for(i=1;i<=base;i++)
    {
        for(j = 1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int print_right_triangle(int base)
{
    int i,j ;
    for( i=1;i<=base;i++)
    {
        for( j = (base-i); j >=1; j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int print_left_triangle1(int base, char a)
{
    int i,j ;
    for(i=1;i<=base;i++)
    {
        for(j = 1;j<=i;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
}
int main()
{
    // print_left_triangle(3);
    // print_right_triangle(5);
    print_left_triangle1(20,'%');
}