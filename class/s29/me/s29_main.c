#include<stdio.h>
const int row_count =5 ;
const int col_count =5 ;

void zeromemory(int* pMem, int size)
{
    for(int i=0;i<size;i++)
    {
        pMem[i]=0;
    }
}
void setmatrix(int*pMem, int i,int j,int value)
{
    pMem[i * col_count + j] = value;

}
int getmatrix(int* pMem,int i, int j)
{
    return pMem[i*col_count+j];
}
void printmatrix(int* pMem)
{
}
int main(int argc, char const *argv)
{
    int matrix[25];
    printmatrix(matrix);
    zeromemory(matrix, 25);
    printmatrix(matrix);
    setmatrix(matrix,0,0,1);
    setmatrix(matrix,0,0,1);
    printmatrix(matrix);

}