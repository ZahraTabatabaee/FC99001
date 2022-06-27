int str_len(char* pch)
{
    int i ;
    for(i=0 ; *pch !=0;i++)
    {
        pch++;
    }
    return i;
}
bool str_compare(char* pch1 ,int size1,char* pch2,int size2)
{
    for(int i = 0; i <size1 && pch1[i]!=0 ; i++)
    {
        if(pch1[i]!=pch2[i])
        return false;
    }
    return true;
}
char* str_copy(char* pch1 ,int size1,char* pch2,int size2)
{
    int idx = 0;
    while (*pch1 != 0)
    {
        pch2[idx]=*pch1;
        idx++;
        pch1++;
    }
    pch2[idx] = 0;
    return pch2;
}
char* str_append(char* pch1,int size,char* pch2)
{
    int idx = 0;
    char pch3[size] ;
    while (*pch1 != 0)
    {
        pch3[idx]=*pch1;
        idx++;
        pch1++;
    }
    while (*pch2 != 0)
    {
        pch3[idx]=*pch2;
        idx++;
        pch2++;
    }
    pch3[idx] = 0;
    return pch3;
}