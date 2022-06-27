#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// bool is_bit_on(int number, int bit)
// {

// }

// void is_bit_on2(int number, int bit, bool* is_on)
// {
//     *is_on = true;
// }


// int main()
// {   
//     bool is_on;
//     is_bit_on2(5, 2, &is_on);
//     is_on = is_bit_on(12, 3);

//     int x;
//     printf("nomrat chande? ");
//     int status_code = scanf("%s", &x);
//     printf("pas normat %d hast\n", x);

//     int w = 0;
//     w = w + 1;
//     w++;
//     w+=1;

//     w = w - 1;
//     w--;
//     w-=1;

//     w = w * 4;
//     w *= 4;

//     w = w / 2;
//     w /= 2;

//     w = 5;
//     w = w << 1;
//     w <<= 1;

//     w = w >> 2;
//     w >>= 2;
    
//     w = 5 | 8;
//     w |= 4;
//     w &= 8;

//     w &= 16;
//     w >>= 4;
//     if (w == 1)
//         printf("bit number 5 is one");
//     else
//         printf("bit number 5 is zero");    

//     for(int i = 0;
//         i < 10;
//         i++)
//     {
//         printf("%d\n", i);
//     }

//     int i = 0;
//     while (i < 10)
//     {
//         printf("%d\n", i);
//         i++;
//     }

//     i = 0;
//     do
//     {
//         printf("%d\n", i);
//     } while (i < 10);

//     if ( (i < 10) && (i % 2 == 0) || (i % 2 == 1))
//     {
//         printf("");
//     }
//     else if ( i > 100)
//     {
//         printf("");
//     }
// }
void is_on(int number, int bit)
{
    int result = number >> (bit -1);
    if (result &= 1)
    {
        printf("true");
    }
}
void is_on2(int number, int bit)
{
    int result = pow(2,(bit -1));
    if ( result &= number )
    {
        printf("true");
    }
}
bool is_bit_on(int n , int bit)
{
    int power = pow(2,(bit-1));
    n &= power;
    n >>= bit-1;
    if(n==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}
int main()
{
    is_on2(4,3);
    return 0;
}