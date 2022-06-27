#include<stdio.h>

int make_head(int n){
    int i,j ;
    for(j=1; j<= n; j++){
        for(i=1 ; i<= n-j+1 ; i++)
            printf(" ");
        if(j==1)
        {
            printf("^");
        }
        else
        {
            for(int k=1; k<j ; k++)
                printf("/");
            printf("|");
            for(int k=1; k<j ; k++)
                printf("\\");   
            }
            printf("\n");
        }
        return 0;
}
int make_seperator(int n)
{
    printf("+");
    for(int i=1; i<=(n-2);i++)
    {
        printf("-");
    }
    printf("+\n");
}
int make_body(int n)
{
    int i,j ;
    for(j=1;j<=4;j++)
    {
        printf("+");
        for(int i=1; i<=(n-2);i++)
        {
            printf("*");
        }
        printf("+\n");
    }
}

int main()
{
    make_head(4);
    make_seperator(9);
    make_body(9);
    make_seperator(9);
    make_body(9);
    make_seperator(9);
    make_head(4);
}