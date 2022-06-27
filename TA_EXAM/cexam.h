#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
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
void q6_number_to_string(int a , char* b)
{
    int count = q5_digit_count(a);
    if(a<0)
    {
        a = a * -1 ; 
        b[0]='-';
        count++;
    }
    b[count]=0;
    while (a>0)
    {
        int d = a%10;
        a = a/10;
        b[count-1]= 48+d;
        count--;
    }
    
    
}
void append(char* a,const char* b)
{
    int idx = 0;
    while (a[idx]!= 0)
    {
        idx++;
    }
    while (*b != 0)
    {
        a[idx]=*b;
        idx++;
        b++;
    }
    a[idx]=0;
}
void appennd_num(int x, char* str)
{
        char buf[10]="";
        q6_number_to_string(x,buf);
        append(str,buf);
}
void q7_equation_to_string(int a, int b, int c , char* ch)
{
    ch[0]=0;
    if(a!=0)
    {
        if(a!=1)
        {
            appennd_num(a,ch);
        }
        append(ch, "x^2");
    }
    if(b!=0)
    {
        if(b>0)
        {
            append(ch,"+");
        }
        if(b!=1)
        {
            appennd_num(b,ch);
        }
        append(ch,"x");
    }
    if(c!=0)
    {
        if(c>0)
        {
            append(ch,"+");
        }
        appennd_num(c,ch);
    }
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
void q12_reverse_odd_positions(char* buf)
{
    int size = get_len(buf);
    int end = size%2 == 1 ? size -2 : size -1 ;
    for(int i = 1 ; i < (end/2) ; i+=2) 
    {
        char tmp = buf[i];
        buf[i] = buf[end-i+1];
        buf[end-i+1]= tmp;
    }
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
    int** m = (int**)malloc(size1*sizeof(int*));
    for(int i = 0 ; i <size1 ; i ++)
    {
        m[i] = (int*)malloc(size2*sizeof(int));
        for(int j = 0 ; j < size2 ; j++)
        {
            m[i][j]=a[i][j]+b[i][j];
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
    char* result = (char*)pcn;
    return result+3;
}
char* q17_get_cn_ptr2(complex_number* pcn)
{
    char* result = (char*)pcn;
    return result+11;
}
int q18_aggregate(int* array, int a,_int_2int_ fp)
{
    int result = array[0];
    for(int idx = 1 ; idx < a; idx++)
    {
        result = fp(result, array[idx]);
    }
    return result;
}