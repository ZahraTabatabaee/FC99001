#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function.h"
#include<stdio.h>
typedef struct {
    int n ;
    _self* (*f)( _self*);
} _self ;

_self* self_func(_self* p )
{
    (p->n )+= 1 ;
    return p ;
}
// TEST_CASE( "return self struct with fn ptr", "[function_pointer]" ) {
//     _self p = {0, self_func};
//     p.f(&p);
//     REQUIRE(p.n == 1);

//     p.f(&p)->f(&p);
//     REQUIRE(p.n == 3);

//     p.f(&p)->f(&p)->f(&p);
//     REQUIRE(p.n == 6);

//     p.f(&p)->f(&p)->f(&p)->f(&p)->f(&p);
//     REQUIRE(p.n == 11);
// }

int main(int argc, char const *argv[])
{
    _self p = {0, self_func};
    printf("%d", p.n);
    // p.f(&p);
    return 0;
}
