#include<stdio.h>

int main()
{
    float min=100000000;
    float max = 0;
    float sum = 0;
    int number = 0;
    float average = 0;
    while (1<2)
    {

        float x ;
        printf("enter your number : ");
        scanf("%f", &x);
        number = number + 1;
        if(x!=-1)
        {
            if(x > max)
                max = x ;
        }
        if(x!=-1)
        {
            if(x < min)
                min = x ;
        }
        if(x!=-1)
        {
            sum = sum + x ;
            average = (sum / number);
        }

        if( x == -1)
        {
            break;
        }
        printf("\n\nThe maximum = %f\n", max);
        printf("The minimum = %f\n", min);
        printf("The average = %f\n", average);
        printf("The number of entries = %d\n\n", number);
    }
}