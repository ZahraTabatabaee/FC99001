void swap(int* a, int* b)
{
    if (a== nullptr || b == nullptr)
        return;
    int temp = *a;
    *a = *b ;
    *b = temp;
}
unsigned char get_byte(unsigned int n , int byte)
{
    n = (n>>(byte*8));
    unsigned char m = (unsigned char )n;
    return m ;
}
char* address_plus(char* pch , int a)
{
    for (int i = 0; i < a; i++)
    {
        pch++;
    }
    return pch;
}
int array_as_int(char* pch)
{
    int *x = (int*)pch;
    return *x;
}