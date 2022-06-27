#include<stdio.h>
int _plus2(int a) { return a+2;}
int _mult2(int a) { return a*2;}
int _negate(int a) { return a*-1;}
int _add(int a, int b) {return a+b;}
int _sub(int a, int b) {return a-b;}
int _mul(int a, int b) {return a*b;}
int _div(int a, int b) {return a/b;}
int _max(int a, int b) {return a<b?b:a;}
int _min(int a, int b) {return a<b?a:b;}
typedef int (*pfn3)(int);

pfn3 my_actions3[3] = {_plus2, _mult2, _negate};
void apply_fn_list( int*n, pfn3* op , int size)
{
    
    for(int i = 0 ; i < size ; i++ )
    {
        *n =(*op)(n[i]);
    }
    printf("%d",*n);
}
int main()
{
    int (*fn_list[])(int) = {_plus2, _mult2, _negate};
    int n=1;
    apply_fn_list(&n, fn_list, 3); 
}