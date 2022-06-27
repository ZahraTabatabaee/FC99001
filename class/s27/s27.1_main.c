#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include<stdio.h>

int strlen(const char* pch,int size)
{
    int len=0;
    while (*pch && len<size)
    {
        len++; pch++;
    }
    return len;
}

TEST_CASE( "String Length", "[strlen]" ) {
    REQUIRE( strlen("ali", 5) ==3 );
    char buf[10] = "hosssein";
    REQUIRE(strlen(buf, 10) == 7 );
}