#include<stdio.h>
void salaryhike(int* salary,int bonus)
{
    *salary = *salary + bonus;
}
int main()
{
    int salary = 0;
    int bonus = 0;
    printf("Enter the employee current salary :");
    scanf("%d", &salary);
    printf("enter bonus :");
    scanf("%d", &bonus);
    salaryhike(&salary, bonus);
    printf("final salary : %d", salary);

}