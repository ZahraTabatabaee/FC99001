int _plus2(int a) { return a+2;}
int _mult2(int a) { return a*2;}
int _negate(int a) { return a*-1;}
int _add(int a, int b) {return a+b;}
int _sub(int a, int b) {return a-b;}
int _mul(int a, int b) {return a*b;}
int _div(int a, int b) {return a/b;}
int _max(int a, int b) {return a<b?b:a;}
int _min(int a, int b) {return a<b?a:b;}
typedef int (*pfn)(int);
void apply(int* pn , pfn op )
{
    *pn = op(*pn);
}
typedef int (*pfn2)(int,int);
void apply2(int a, int b , int* s , pfn2 op)
{
    *s = op(a,b);
}
typedef int (*pfn3)(int);
void apply_fn_list(int* n , pfn3* op, int len)
{
    for(int i = 0; i < len ; i++)
    {
        *n = op[i](*n);
    }
}

pfn2 get_func(char a)
{
    if (a == '+' )
    {
        return _add;
    }
    if (a == '-' )
    {
        return _sub;
    }
    if (a == '*' )
    {
        return _mul;
    }
    if (a == '/' )
    {
        return _div;
    }
    else
    {
        return nullptr;
    }
    
}
typedef struct _new {
    int n ;
    _new* (*f)(_new*);
} _self ;
_self* self_func(_self* op)
{
    op->n += 1;
    return op ;
}
