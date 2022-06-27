#include<stdio.h>
#include<stdbool.h>
int pos(int *a, int *c, int* b)
{
    for(int i=0; i < *a ;i++)
    {
        if (*c == b[i])
        return (i+1);
    }
} 

int main()
{
    int a ;
    int c ;
    int b[1000];
    printf("enter size of array :\n");
    scanf("%d", &a);
    printf("enter elements of array :\n");

    for(int i = 0;i<a;i++)
    {
        scanf("%d", &b[i]);
    }
    printf("enter element to search :\n");
    scanf("%d", &c);
    printf("%d is found at %d position ",c,pos(&a,&c,b));



