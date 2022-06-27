#include<stdio.h>
// int test[] = {1,5,7,8}
// int m_24()
// {
//     int test[10];
//     for(int i = 0;i < 10;i++)
//     {
//         test[i]=i;
//         printf("%d\t",test[i]);
//     }
// }

// int main()
// {
//     int test[] = {1,5,7,8};
//     printf("%d",test[2]);
//     m_24();
// }
int main()
{
    int a[10];
    a[0]=0;
    a[1]=1;
    printf("%d\t%d\t", a[0],a[1]);
    for(int i=2;i<10;i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("%d\t",a[i]);
    }
}