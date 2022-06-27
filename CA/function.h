typedef struct {
    int n ;
    _self* (*f)( _self*);
} _self ;

_self* self_func(_self* p )
{
    (p->n )+= 1 ;
    return p ;
}