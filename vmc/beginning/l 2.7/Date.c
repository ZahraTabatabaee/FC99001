#include<stdio.h>
#include<stdbool.h>
const char * days_in_month(int monthnumber)
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
        return "28 days";
    }
    if(monthnumber>12) 
    return "not valid monthnumber";

}
int main()
{
    int monthnumber;
    printf("pleas inter monthnumber:");
    scanf("%d",&monthnumber);
    printf("%s", days_in_month(monthnumber));
}