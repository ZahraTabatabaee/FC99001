#include<stdio.h>
#include<assert.h>
int average(int * array , int size)
{
    float sum = 0;
    for(int i = 0; i < size ; i++)
    {
        sum = sum + array[i];
    }
    float a = sum/size;
    return a ;
}
int main(int argc, char const *argv[])
{
    int array[] = {1,2,4,5};
    assert(average(array,4)==3);
    return 0;
}
