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
pfn my_actions[3] = {_plus2, _mult2, _negate};
void apply(int* pn , pfn op )
{
    *pn = op(*pn);
}
int main()
{
    int n = 5;
    apply(&n, _plus2);
}