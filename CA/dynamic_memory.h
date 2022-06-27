#include<stdlib.h>
#include<math.h>
int* repeat_value(int value,int count)
{
    int* result = (int*)malloc(count*sizeof(int));
    int idx = 0;
    for(int i = 0;i<count;i++)
    {
        result[idx] = value;
        idx++;
    }
    return result;
}
int* range(int from , int to)
{
    int count = (to-from+1);
    int* result = (int*)malloc(count*sizeof(int));
    int idx = 0;
    for(int x = from ; x <= to ; x++)
    {
        result[idx]= x;
        idx++;
    }
    return result;
}