#include<stdio.h>
void findFactorial(int*, int);
int main()
{
    int n;
    int f;
    printf("Input your number :");
    scanf("%d", &n);
    findFactorial(&f, n);
    // printf("factrprial %d is %d ", n, f);
    return 0;
}
void findFactorial(int* f, int n)
{
    *f = 1;
    for(int i=1; i<= n; i++)
    {
        *f = *f * i ;
    }
}