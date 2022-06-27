#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

int q1_sum(int a, int b)
{
    return a+b;
}
int* q2_sum(int a, int b, int* s)
{
    *s = (a+b);
    if(*s%2!=0)
    {
        return s;
    }
    else
    {
        return 0;
    }
}
long int power(int x, int y)
{
    int i ;
    int n = 1;
    for(i=1;i<=y;i++)
    {
        n= n*x;
    }
    return n;
    
}
double q3_solve_equation(int a,int b, int c, double* x1,double* x2)
{
    int d = (power(b,2)-(4*c*a));
    if(d<0)
    {
        *x1 = 0;
        *x2 = 0;
        return 0;
    }
    if(d==0)
    {
        *x1 = (-b/(2*a));
        *x2 = (-b/(2*a));
        return 1 ;
    }
    if(d>0)
    {
        *x2 = ((-b + sqrt(d))/(2*a));
        *x1 = ((-b - sqrt(d))/(2*a));
        return 2;
    }
    return 0;
}
void q4_add_equations(int x1,int y1, int z1 , int x2, int y2, int z2, int* a, int*b ,int* c)
{
    *a = x1 + x2;
    *b = y1 + y2 ;
    *c = z1 + z2 ;
}
int q5_digit_count(int a)
{
    int count = 0;
    int n = abs(a);
    for(int i=0; n!=0; i++)
    {
        n = n/10;
        count++;
    }
    return count;
}
int q6_number_to_string(int a , char* b)
{
    return 0;
}
int q7_equation_to_string(int a, int b, int c , char* d)
{
    return 0;
}
int* q8_fill_array(int* array, int count, int value)
{
    int idx = 0;
    for(int i = 0;i<count;i++)
    {
        array[idx] = value;
        idx++;
    }
    return array;
}
int* q9_array_copy(int * a, int sizeb , int* b)
{
    int idx = 0;
    for(int i = 0 ; i < sizeb ; i ++)
    {
        b[i]=a[i];
    }
    return b;
}
int q10_max_odd_numbers(int* array , int a)
{
    int max = array[0];
    int idx = 0 ;
    for(int i = 0 ; i < a ; i++ )
    {
        if(array[i]%2 == 1)
        {
            if(array[i]>max)
            {
                max = array [i];
            }
        }
    }
    return max;
}
int q11_max_odd_positions(int* array , int a)
{
    int max = -100;
    int idx = 0 ;
    for(int i = 0 ; i < a ; i++ )
    {
        if(i%2 == 1)
        {
            if(array[i]>max)
            {
                max = array [i];
            }
        }
    }
    return max;
}

int get_len(char* pch)
{
    int i ;
    for(i=0 ; *pch !=0;i++)
    {
        pch++;
    }
    return i;
}
const char* q12_reverse_odd_positions(char* buf)
{
    int len = get_len(buf);
    for(int i = (len-1) ; i>(len/2) ;i=i-2)
    {
        if(len%2==0)
        {
            char temp = buf[i];
            buf[i] = buf [ len-i];
            buf[len-i]= temp ;
        }
        else
        {
            char temp = buf[i-1];
            buf[i-1] = buf [ len-i+1];
            buf[len-i+1]= temp ;
        }
         
    }
    return buf;
}
bool q13_matrix_compare(int** a, int** b , int size1 , int size2)
{
    int count = 0 ;
    for(int i = 0 ; i <size1 ; i ++)
    {
        for(int j = 0 ; j < size2 ; j++)
        {
            if(a[i][j]==b[i][j])
            {
                count++;
            }
        }
    }
    if (count == size1*size2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int** q14_matrix_add(int** a, int** b , int size1 , int size2)
{
    int** m = (int**)malloc(6*sizeof(int));
    for(int i = 0 ; i <size1 ; i ++)
    {
        for(int j = 0 ; j < size2 ; j++)
        {
            *(*(m+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    return m ;
}

typedef struct 
{
    double i ;
    double r ;
} complex_number ;
complex_number* q15_create_complex_number(int a, int b)
{
    complex_number* pcn = (complex_number*)malloc(sizeof(complex_number));
    pcn->i = a;
    pcn->r = b ;
    return pcn ;
}

complex_number* q16_add_complex_number(complex_number* pnc1 ,complex_number* pnc2)
{
    pnc1->i = pnc1->i+pnc2->i;
    pnc1->r = pnc1->r+pnc2->r;
    return pnc1;
} 
char* q17_get_cn_ptr1(complex_number* pcn)
{
    return 0;
}
char* q17_get_cn_ptr2(complex_number* pcn)
{
    return 0;
}





typedef int (*_int_2int_)(int, int);
int get_max(int a, int b)
{
    return a>b?a:b;
}
int get_min(int a, int b)
{
    return a<b?a:b;
}
int get_sum(int a, int b)
{
    return a+b;
}
int q18_aggregate(int* array, int a,_int_2int_ fp)
{
    // int result = 0 ;
    // int x = array[0];
    // int y = array[1];
    // result = fp(x,y);
    // for(int i = 0 ; i < a ; i++)
    // {

    // }
    return 0 ;
}