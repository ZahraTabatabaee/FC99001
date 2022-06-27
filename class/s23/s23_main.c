#include<stdio.h>
#include<stdbool.h>
void swap(int* px,int* py)
{
    int z = *px;
    *px = *py;
    *py = z;
}
void is_bit_on(int num, int bit, bool* is_bit_on)
{
    *is_bit_on = (num >> (bit-1)) & 1 == 1 ;
}
int get_max(int a, int b, int* max,int* min)
{
    if (a < b)
    {
        *max = *&b;
        *min = *&a;
    }
    else
    {
    *max = a;
    *min = b;
    }
}
int main()
{
    int x = 3;
    int y = 4;
    int max;
    int min;
    get_max(x,y,&max,&min);
    printf("%d\t%d",max,min);
    // swap(&x,&y);
    // printf("%d, %d",x, y );

}