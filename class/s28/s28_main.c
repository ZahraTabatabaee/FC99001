#include<stdio.h>

int strlen(char* t)
{}

int main()
{
    char buf[10] = "ali";
    char* t = buf;
    printf("%s\n", buf);
}
void print_args1(const char * argv[], int argc)
{
    for(int i=0; i<argc; i++)
        printf("%s",argv[i]);
}

void print_args2(const char* argv[], int argc)
{
    for(int i=0;i<argc;i++)
    {
        char* buf = argv[i];
        printf("%s",buf);

    }
}

void print_args3(const char * argv[], int argc)
{
        char**ppc = argv;
        int i =0;
        while (i < argc)
        {
            char* pch = *ppc;
            printf("%S\n",pch);
            ppc++;
            i++;
        }        
}
int main(int argc, char const *argv[])
{
    printf("%d\n", argc);
    return 0;
}