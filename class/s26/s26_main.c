#include<stdio.h>
#include<stdbool.h>

int get_len(char* pch)
{
    int i ;
    for(i=0 ; *pch !=0;i++)
    {
        pch++;
    }
    return i;
}
void reverse(char* pch)
{
    int a = get_len(pch);
    for(int i=a-1; i>=0 ;i--)
    {
        printf("%c",pch[i]);
    }
}
void printstr(char* pch)
{
    int a= get_len(pch);
    for(int i = 0; i <= a-1 ;i++)
    {
        printf("%c",pch[i]);
    }
}
void reverse2(char* pch,int size)
{
    int a = (size);
    for(int i=a-1; i>=0 ;i--)
    {
        printf("%c",pch[i]);
    }
}
int main()
{
    char a[10]= "zahra";
    char* b = &a[0];
    // get_len(b);
    // reverse(b);
    // printstr(b);
    reverse2(b,5);
}

