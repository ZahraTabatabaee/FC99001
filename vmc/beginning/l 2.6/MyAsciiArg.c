#include<stdio.h>
int make_head(int n){
    int i,j ;
    if(n%2==1){
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
}}
int main()
{
    for(int i = 1;i<9;i++)
    make_head(i);
}