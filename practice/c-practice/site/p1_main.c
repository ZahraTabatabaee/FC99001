#include<stdio.h>
int main()
{
    int num = 10;
    printf("value of variable num is : %d", num);
    printf("\naddress of variable num is : %p", &num);
    int *p;
    *p=10;
    printf("address of variable num is : %p", p);


}