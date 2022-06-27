#include<stdbool.h>
#include<math.h>
#include<stdlib.h>


typedef bool (*__cmp_fn__)(int,int);

bool is_bigger(int a, int b)
{
    return a>b;
}

bool is_smaller(int a, int b)
{
    return a<b;
}

int q1_get_max(int a , int b , int c)
{
    int l[4] = {a,b,c,0};
    int max = l[0];
    for (int i = 0; l[i]!=0; i++)
    {
        if (l[i]>max)
        {
            max = l[i];
        }
    }
    return max;
    
}

bool q2_is_right_angled(int a , int b , int c)
{
    if(a*a +b*b==c*c)
        return true;
    if(a*a +c*c==b*b)
        return true;
    if(c*c +b*b==a*a)
        return true;
    return false;

}

int q3_array_fsum(int* a, int* b, int*c,int size)
{
    int sum = 0 ;
    for (int i = 0; i < size; i++)
    {
        int x = a[i]*b[i] + c[i];
        sum += x;
    }
    return sum;
}

char* q4_string_shuffle(char* str )
{
    for (int i = 0;str[i]!=0; i=i+2)
    {
        char z = str[i];
        str[i] = str[i+1];
        str[i+1]= z;
    }
    return str;
    
}

int q5_last_index_of(char* str, char*s)
{
    int i=0;
    int* a ;
    while (str[i] != 0)
    {
        if (str[i] == s[0])
        {
            *a = i;
            int j=0;
            while (s[j] != 0)
            {
                if (str[i+j] != s[j])
                {
                    *a=0;
                    break;
                }
                j++;
            }
        }
        i++;
        a++;
    }
    int max = -1;
    for (int n = 0; a[n]!=0; n++)
    {
        if (a[n]>max)
        {
            max = a[n];
        }
    }
    
    return max;
}

















// int* sort1(int* nums)
// {
//     for (int i = 0; nums[i]!=0; i++)
//     {
//         for (int j = i+1; nums[j]!=0; j++)
//         {
//             if(nums[i]>nums[j])
//             {
//                 nums[i],nums[j]=nums[j],nums[i];
//             }
//         }
        
//     }
//     return nums;
// }

void q6_sort(int* a, int* b, int*c,int* d)
{

}
void q7_generic_sort(int* a, int* b, int*c,int* d,__cmp_fn__ func)
{

}