
#include<stdlib.h>
#include<stdio.h>
typedef struct{
    char name[10] ;
    double grade ;
}_student;

_student* add_grade(_student* pstd , double plus)
{
    pstd -> grade += plus;
    return pstd;
}

typedef struct{
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
} int_struct;

unsigned int* get_some_ptr(int_struct* ptr)
{
    char* a = (char*)ptr;
    for(int i = 0; i<6;i++)
    {
        a++;
    }
    unsigned int* b = (unsigned int*)a;
    return b;

}
typedef struct{
    unsigned int A;
    char B[6];
    unsigned int C;
    double D;
    unsigned int E;
} complex_struct;
unsigned long long * get_some_ptr2(complex_struct* ptr)
{
    char* a = (char*)ptr;
    for(int i = 0; i<6;i++)
    {
        a++;
    }
    unsigned long long * b = (unsigned long long *)a;
    return b;
}