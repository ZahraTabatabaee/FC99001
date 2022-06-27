#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int y;
    scanf("%d", &y);
    int array[y];


    int x = argc < 5 ?
        (argc > 4 ? 3 : 2) :
        3 ;
    if (x % 2 == 1)
        x = 6 ;
    else 
        x = 7 ;
    x = x % 2 == 1 ? 6 : 7 ;

    // if (x == 3)
    //     printf(" x is 2")
    // else if ()
    switch (x)
    {
    case 3:
        printf(" x is 3 or 2 or 1");
        break;
    case 4:
        printf(" x is 4");

    default:
        printf(" x is something else");
        break;
    }
}
