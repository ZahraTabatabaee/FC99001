#include<stdio.h>
#include<stdbool.h>
bool concat(
    char* pch1, int size1,
    char* pch2, int size2, 
    char* pchTarget, int targetsize)
{
    char *pcht = pchTarget ; 
    int i1 = 0;
    for(char * pch = pch1; *pch!=0 && (i1 <size1) && ((i1)<targetsize); pch++, pcht++, i1++)
    {
        *pcht=*pch;
    } 
    if (i1==targetsize)
        return false;
    int i2 = 0;   
    for(char * pch = pch2; *pch !=0 && (i2 <size2) && ((i1+i2)<targetsize); pch++, pcht++, i2++)
    {
        *pcht=*pch;
    }
    if (i1+i2==targetsize)
        return false;
    if(i1+i2+1<targetsize)
        *pcht =0;
    else
    {
        return false;
    }
    
    return true;
}


void main()
{
    char buff1[10] = "zahra";
    char buff2[11] = "tabatabaee";
    char buff3[16];
    bool success = concat(&(buff1[0]), 6, &(buff2[0]), 11, &(buff3[0]), 16);
    if (! success)
        printf("Error\n");
        
    // printf("%s\n",buff3);

    int idx = 0;
    char* pch = &(buff1[0]);
    while (*pch != 0)
    {
        buff3[idx]=*pch;
        idx++;
        pch++;
    }
    buff3[idx]=' ';
    idx++;
    pch = &(buff2[0]);
    while (*pch != 0)
    {
        buff3[idx]=*pch;
        idx++;
        pch++;
    }

    buff3[idx]=0;
    printf("%s",buff3);
}