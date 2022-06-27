#include<stdio.h>
#include<stdbool.h>
int  array_sum(int* array, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    return sum;
}
int array_sum_ptr(int* array, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += *array;
        array++;
    }
    return sum;
}
int array_sum2d(int m , int n , int a[][2])
{
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        sum += a[i][j];        
    } 
    return sum;
}
int array_sum2d_ptr(int m , int n , int * a)
{
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum = sum + *a;
            a++;
        }
    }
    return sum;
}
int jagged_array_sum(int ** array, int* size ,int row)
{
    int sum = 0;
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j < size[i];j++)
        {
            sum += array[i][j];
        }
    }
    return sum;
}
int jagged_array_sum_ptr(int ** array, int* size ,int row)
{
    int sum = 0;
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j < *size ;j++)
        {
            sum += *(*(array+i)+j);  
        }
        *size++;
    }
    return sum;
}
