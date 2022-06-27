#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    long long int mul = 1;
    for(int i=1;i<=n;i++)
    {
        mul = mul*i;
    }
    return mul;
}
float eulers_constant(float precision)
{
    float n = 1;
    float sum = 1;
    while (1.0/factorial(n) > precision)
    {
        sum = sum + 1.0/factorial(n);
        n++;
    }
    return sum;
}
float exp1(float x, float precision)
{
    float n = 1;
    float sum = 1;
    while (1.0*(pow(x,n))/factorial(n) > precision)
    {
        sum = sum + 1.0*(pow(x,n))/factorial(n);
        n++;
    }
    return sum;    
}
float exph2(float x, float precision)
{
    float n = 1;
    float sum = 0;
    float w = 1;
    while (w > precision)
    {
        sum = sum + w ;
        w = w * x / n ;
        n++;
    }
    return sum;   
}
float abs1(float x)
{
    if(x<0)
    {
        return (-1*x);
    }
    else
    {
        return x;
    }
    
}
const char* near1(float x, float y, float closeness)
{
    float c = abs1(x-y);
    if(x<y)
    {
        x=y;
    }
    float d = closeness * x ;
    if (c<=d)
    {
        return "true";
    }
    else
    {
        return "false";
    }
    
}
long int power(int x, int y)
{
    int i ;
    int n = 1;
    for(i=1;i<=y;i++)
    {
        n= n*x;
    }
    return n;
    
}
float sin1(float x, float precision)
{
    x = x *(3.14)/180.0;
    int n = 1;
    float sum = 0;
    float w = 1;
    float sign = 1 ;
    while (abs1(w)>precision)
    {
        float p = pow(x,n);
        w = sign * ( p / factorial(n));
        if( abs1(w)> .000001)
        {
            sum = sum + w ;
            n = n + 2;
            sign = -1 * sign;
        }
    }
    return sum ;

}
float square_root(int x,float precision)
{
    float lowerBound = 0;
    float upperBound = x ;
    float midbound ;
    while ((upperBound - lowerBound)>precision )
    {
        midbound = (upperBound + lowerBound)/2 ;
        if ((midbound*midbound)>x)
        {
            upperBound = midbound;
        }
        if ( (midbound*midbound)<x)
        {
            lowerBound = midbound;
        }
        if ( (midbound*midbound)==x)
        {
            return midbound;
        }
    }
    return midbound;   
}
double root1(double x, double n , double precision)
{
    double lowerBound = 0;
    double upperBound = x ;
    double midbound ;
    while ((upperBound - lowerBound)>precision )
    {
        midbound = (upperBound + lowerBound)/2 ;
        if (pow(midbound, n)>x)
        {
            upperBound = midbound;
        }
        if ( pow(midbound, n)<x)
        {
            lowerBound = midbound;
        }
        if (pow(midbound, n)==x)
        {
            return midbound;
        }
    }
    return midbound;   
}
double ln1(double x , double precision)
{
    double lowerBound = 0;
    double upperBound = x ;
    double midbound ;
    double w;
    while ((upperBound - lowerBound)>precision )
    {
        midbound = (upperBound + lowerBound)/2 ;
        w = exp(midbound);
        if ( w < x)
        lowerBound = midbound ;
        if ( w > x)
        upperBound = midbound ;
    }
    return midbound ;
}
int main()
{   
    printf("%f\n", sin1(90,0.001));
    float x = exp1(1.0,0.01);
    float y = exph2(1.0,0.01);
    printf("%f\n", eulers_constant(0.1));
    printf("%f\n", exp1(1.0,0.01));
    printf("%f\n", exph2(1.0,0.01));
    printf("%f\n", abs1(-5.5));
    printf("%s\n", near1(999.0,1000.0,.001));
    printf("%s\n", near1(x,y,.001));

    printf("%f\n", square_root(2.0,0.01));
    printf("%f\n", root1(10.0,3.0,.00001));
    printf("%f\n", ln1(100 , 0.001));





}