#include<stdlib.h>

int sub(int a, int b)
{
    return a - b;
}

int add(int a, int b)
{
    return a + b;
}

typedef int (*_ii2i_fp)(int,int);

int string_len(char* pch)
{
    int count = 0;
    for(int i = 0 ;*pch !=0 ; i++)
    {
        count++;
        pch++;
    }
    return count;
}

char* str_cpy(char* a,char* b)
{
    while (*a!=0)
    {
        *b = *a ;
        a++;
        b++;
    }
    *b = 0;
    return b;
}

int char_count(const char* str , char a)
{
    int count = 0;
    for(int i = 0 ;*str !=0;i++)
    {
        if (*str==a)
        {
            count++;
            
        }
        str++;
    }
    return count;
}

int longest_char_sequence(const char* str , char a)
{
    int i = 0;
    int n = 0;
    int max = 0;
    while (str[i]!=0)
    {
        if(str[i] ==a )
        {
            n++;
            if(n>max)
                max = n;
        }
        else
        {
            n=0;
        }
        i++;
    }
    return max;
}

// int count_pattern(const char* str1, const char* str2)
// {
//     int i = 0;
//     int count = 0;
//     while (str1[i]!=0)
//     {
//         if(str1[i]==str2[0])
//         {
//             int j = 0;
//             int eq =1 ;
//             while (str2[i]!=0)
//             {
//                 if(str1[i+j]!=str2[j])
//                 {
//                     eq = 0;
//                     break;
//                 }
//                 j++;
//             }
//             count += eq ;
//         }
//         i++;
//     }
//     return count;
// }
int count_pattern(const char *array, const char * pattern){
    int i=0;
    int count =0;
    while (array[i] != 0)
    {
        if (array[i] == pattern[0]){
            int j=0;
            int iseq = 1;
            while (pattern[j] != 0){
                if (array[i+j] != pattern[j]){
                    iseq = 0;
                    break;
                }
                j++;
            }
            count += iseq;
        }
        i++;
    }
    return count;
}

int* apply(int size, int* list1, int* list2,_ii2i_fp f,int* actual)
{
    for(int i = 0 ; i < size ; i++)
    {
        *actual = f(list1[i],list2[i]);
        actual++;
    }
    return actual;
}

typedef struct {
    char id[10];
    char name[30];
}student;

void change_student_id(student* s,char* id )
{
    for (int i = 0; i < 10; i++)
    {
        s->id[i] = id[i];
    }
    
}
void change_student_name(student* s,char* name )
{
    for (int i = 0; i < 30; i++)
    {
        s->name[i] = name[i];
    }
}

char* student_tostring(student* s)
{
    char* result = (char*)malloc(sizeof(student));
    int idx = 0;
    while ((s->id[idx]) != 0)
    {
        result[idx] = (s->id[idx]);
        idx++;
    }
    result[idx]= ':';
    idx++;
    int j = 0 ;
    while (j<20)
    {
        result[idx] = (s->name[j]);
        idx++;
        j++;
    }    
    return result;
}

student* create_student(char* id , char* name)
{
    student * s = (student*)malloc(sizeof(student));
    for (int i = 0; i < 10; i++)
    {
        s->id[i] = id[i];
    }
    for (int i = 0; i < 30; i++)
    {
        s->name[i] = name[i];
    }
    return s;
}

// char* get_std_ptr1(student* ps)
// {
//     char* a = "a";
//     return a;
// }
// char* get_std_ptr2(student* ps)
// {
//     char* a = "a";
//     return a;
// }