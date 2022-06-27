#include<stdio.h>
#include<stdbool.h>
// part1
void swap(int* a,int* b)
{
    if (a == nullptr || b == nullptr)
        return;
    int z = *a;
    *a = *b;
    *b = z;
}
//part2
unsigned char get_byte(unsigned int num,int byte)
{
    num = num >> (byte*8);
    num = num & 0xff ;
    return (unsigned char)num;

}
//part3
char* address_plus(char* element,int n)
{
    for(int i = 0; i< n; i++)
    {
        element++;
    }
    return element;
}
// part4
int array_as_int(char* pch)
{
    int * pc = (int*) pch;
    return *pc;
}