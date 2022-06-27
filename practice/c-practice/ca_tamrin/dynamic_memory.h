#include<stdlib.h>
int* repeat_value(int value , int count)
{
    int* result = (int*)malloc(count*sizeof(int));
    int idx = 0 ;
    for(int i = 0 ; i < count ; i++)
    {
        result[idx] = value ;
        idx++;
    }
    return result ;
}
int* range(int from , int to)
{
    int count = to - from +1;
    int idx = 0 ;
    int* result = (int*)malloc(count*sizeof(int));
    for(int i = from ; i<= to ; i++)
    {
        result[idx] = i ;
        idx++;
    }
    return result ;
}