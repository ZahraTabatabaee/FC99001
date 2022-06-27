#include<stdio.h>
void main()
{
    const char a[15]= "zahra";
    const char b[15]= "tabatabaee";
    char c[30];
    int idx = 0;
    char* p = a;
    while (*p != 0)
    {
        c[idx]=*p;
        idx++;
        p++;
    }
    c[idx]=' ';
    idx++;
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