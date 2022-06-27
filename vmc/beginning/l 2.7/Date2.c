#include<stdio.h>
#include<stdbool.h>
const char * days_in_month(int monthnumber, int year)
{
    char a[7] = {1, 3, 5, 7, 8, 10, 12};
    int idx = 0;
    for(int i = 0;i<8;i++)
    {
        if (monthnumber == a[i])
        return "31 days";
    }
    char b[4] = {4, 6, 9, 11};
    for(int j = 0;j<5;j++)
    {
        if (monthnumber == b[j])
        return "30 days";
    }
    if (monthnumber == 2)
    {
    if(year%400 == 0 || ( year%4==0 && year%100!=0))
    {
        return "29 days";
    }
    else
    {
        return "28 days";
    }
    }
    if(monthnumber>12) 
    return "not valid monthnumber";

}
int days_before_year(int daynumber, int monthnumber,int year)
{
    if(year%400 == 0 || ( year%4==0 && year%100!=0))
    {
        if (monthnumber == 1)
            return (daynumber - 1);
        if (monthnumber == 2 )
            return (31+daynumber - 1);
        if (monthnumber == 3 )
            return (31+29+daynumber - 1);
        if (monthnumber == 4 )
            return (62+29+daynumber - 1);
        if (monthnumber == 5 )
            return (92+29+daynumber - 1);
        if (monthnumber == 6 )
            return (123+29+daynumber - 1);
        if (monthnumber == 7 )
            return (153+29+daynumber - 1);
        if (monthnumber == 8 )
            return (184+29+daynumber - 1);
        if (monthnumber == 9)
            return (215+29+daynumber - 1);
        if (monthnumber == 10) 
            return (245+29+daynumber - 1);
        if (monthnumber == 11) 
            return (276+29+daynumber - 1);
        if (monthnumber == 12)
            return (306+29+daynumber - 1);

    }
    else
    {
        if (monthnumber == 1)
            return (daynumber - 1);
        if (monthnumber == 2 )
            return (31+daynumber - 1);
        if (monthnumber == 3 )
            return (31+28+daynumber - 1);
        if (monthnumber == 4 )
            return (62+28+daynumber - 1);
        if (monthnumber == 5 )
            return (92+28+daynumber - 1);
        if (monthnumber == 6 )
            return (123+28+daynumber - 1);
        if (monthnumber == 7 )
            return (153+28+daynumber - 1);
        if (monthnumber == 8 )
            return (184+28+daynumber - 1);
        if (monthnumber == 9)
            return (215+28+daynumber - 1);
        if (monthnumber == 10) 
            return (245+28+daynumber - 1);
        if (monthnumber == 11) 
            return (276+28+daynumber - 1);
        if (monthnumber == 12)
            return (306+28+daynumber - 1);
    }   
}
const char* day(int daynumber, int monthnumber,int year)
{
    int d = days_before_year(daynumber, monthnumber, year)+1;
    if (d % 7==0 )
        return "monday";
    if (d % 7==1 )
        return "Tuesday";
    if (d%7==2 )
        return "Wednesday";
    if (d%7==3 )
        return "Thursday";
    if (d%7==4 )
        return "Friday";
    if (d%7==5 )
        return "Saturday";
    if (d%7==6 )
        return "Sunday";   
}
int main()
{
    int monthnumber,year,daynumber;
    printf("pleas inter year:");
    scanf("%d",&year);
    printf("pleas inter monthnumber:");
    scanf("%d",&monthnumber);
    printf("pleas inter daynumber:");
    scanf("%d",&daynumber);
    // printf("%s", days_in_month(monthnumber,year));
    // printf("%d", days_before_year(daynumber,monthnumber,year));
    printf("%s", day(daynumber,monthnumber,year));

}