#include<stdio.h>
#include<math.h>

int sum(int a, int b)
{
    return a + b;
}

void print_my_number(int x)
{
    printf("Your number is : %d\n", x);
}
int is_prime(int x)
{
    for(int i=2;i<x;i=i+1)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // int c;
    // c = sum(5, 10);

    // for(int i=0; i<10; i++)
    //     printf("%d", i);

    // double n = 25;
    // int nm = (int) sqrt(25);
    // for(int i=0;i<10;i++)
    // {
    //     for (int j=0; j<20; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             printf("%d, %d\n", i, j);
    //         }
    //         else
    //             printf("ali");
    //         printf("ali");
                
            
    //     }
    // }
    for(int i=2;i<101;i++)
    {
        if (is_prime(i)==1)
        {
            printf("%d\n",i);
        }
    }
}