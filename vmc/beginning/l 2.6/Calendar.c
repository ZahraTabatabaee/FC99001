#include<stdio.h>
int print_month(float monthNumber)
{
    if (monthNumber<13)
    {
        if (monthNumber ==1)
        printf("January");
        if (monthNumber ==2)
        printf("February");
        if (monthNumber ==3)
        printf("March");
        if (monthNumber ==4)
        printf("April");
        if (monthNumber ==5)
        printf("May");
        if (monthNumber ==6)
        printf("June");
        if (monthNumber ==7)
        printf("July");
        if (monthNumber ==8)
        printf("August");
        if (monthNumber ==9)
        printf("September");
        if (monthNumber ==10)
        printf("October");
        if (monthNumber ==11)
        printf("November");
        if (monthNumber ==12)
        printf("December");
    }
}
int main()
{
    int x;
    printf("Enter your monthnumber :");
    scanf("%d",&x);
    print_month(x);
}