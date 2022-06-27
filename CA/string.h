#include<stdio.h>
#include<stdbool.h>
int str_len(char* pch)
{
    int i ;
    for(i=0 ; *pch !=0;i++)
    {
        pch++;
    }
    return i;
}
bool str_compare(char * a,int sizea,char * b,int sizeb)
{
    for(int x = 0; x<sizea && a[x]!=0; x++)
    {
        if (a[x]!=b[x])
        {
            return false;
        }
    }
    return true;
}
void str_append(char* a,int size,char* b)
{
    int x = str_len(a);
    int y = str_len(b);
    int z = x+y;
    char c[z];
    int idx = 0;
    char* p = a;
    while (*p != 0)
    {
        c[idx]=*p;
        idx++;
        p++;
    }
    p = b;
    while (*p != 0)
    {
        c[idx]=*p;
        idx++;
        p++;
    }
    c[idx]=0;
    printf("%s",c);
}
bool str_copy(char* a,int size1,char* b, int size2)
{
    int idx = 0;
    while (*a != 0)
    {
        b[idx]=*a;
        idx++;
        a++;
    }
    b[idx]=0;
    printf("%s",b);
    return true;
}