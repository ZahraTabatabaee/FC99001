#include<stdio.h>
int swap(int* a,int* b)
{
    int z = *a;
    *a = *b;
    *b = z;
}
int main()
{
    int a = 5;
    int b = 10;
    printf("%d\t%d\n",a,b);
    swap(&a,&b);
    printf("%d\t%d",a,b);
}