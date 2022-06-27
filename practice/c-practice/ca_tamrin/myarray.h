int array_sum(int* vec, int a)
{
    int idx = 0;
    int sum = 0;
    for(int i=0 ; i<a ;i++)
    {
        sum = sum + vec[idx];
        idx++;
    }
    return sum;
}
int array_sum_ptr(int* vec, int a)
{
    int sum = 0;
    for(int i=0 ; i<a ;i++)
    {
        sum = sum + *vec;
        vec++;
    }
    return sum;
}
int array_sum2d(int a, int b , int vec[][2])
{
    int sum = 0;
    for(int i = 0 ; i < a; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            sum = sum + vec[i][j];
        }
    }
    return sum ; 
}
int array_sum2d_ptr(int a , int b , int * vec)
{
    int sum = 0;
    for(int i = 0 ; i < a; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            sum = sum + *vec;
            vec++;
        }
    }
    return sum ; 
}
int jagged_array_sum(int **vec,int *size , int row)
{
    int sum = 0 ;
    for(int i = 0 ; i <row ; i++)
    {
        for(int j = 0 ; j<size[i] ; j++)
        {
            sum = sum + vec[i][j];
        }
    }
    return sum ; 
}
int jagged_array_sum_ptr(int **vec,int *size , int row)
{
    int sum = 0 ;
    for(int i = 0 ; i <row ; i++)
    {
        for(int j = 0 ; j<*size ; j++)
        {
            sum = sum + *(*(vec+i)+j);
        }
        size++;
    }
    return sum ; 
}
