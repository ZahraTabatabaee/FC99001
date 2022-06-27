#include <stdio.h>
#include <stdbool.h>

void test1();
void test2();
void test3();
void test4();
void test5();

void advance_pointer(int *ptr) 
{ 
    int q = 10; 
    ptr = &q; 
} 

void advance_pointer2(int *ptr) 
{
    int q = 10;
    *ptr = q;
}
bool is_even(int num)
{
    return !(num & 1);
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    // test3();
    // test4();
    // test5();
    return 0;
}




void test1()
{
    /*
        پیدا کردن اعداد زوج
        استفاده از عملگر های جمع - منها - ضرب - تقسیم و... مجاز نیست
        از عملگرهای منطقی استفاده کنید
        1 = True
        0 = False
    */
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t", is_even(i));
    }
    printf("\n============================================================================================\n");
}

void test2()
{
    /*
        نحوه محاسبه مقدار جدید متغیرها
        a = a + b
        b = |a - b|
        Input --> 4, 5
        Output --> 9, 1
    */
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);

    update(pa, pb);
    printf("%d\n%d\n", a, b);
    printf("\n============================================================================================\n");
}

// void test3()
// {
//     /* 
//         مقدار متغیر ایکس را به عدد ۲ تغییر دهید
//         از تابع چنج استفاده کنید
//         pointer is an object in many programming languages that stores a memory address.
//         pointer references a location in memory, and obtaining the value stored at that location is known as dereferencing the pointer. 
//         dereference operator or indirection operator = *
//         int *p; --> p is a pointer to an integer --> *p is an integer --> p = takes address
//     */
//     int x = 10;
//     int *ptr1 = &x;
//     int **ptr2 = &ptr1;
//     change(ptr2);
//     printf("%d", x); // باید ۲ نمایش بدهد
//     printf("\n============================================================================================\n");
// }

// void test4()
// {
//     /*
//         تعداد حروف انگلیسی خواسته شده را چاپ کنید
//         *** حروف کوچک را چاپ کنید *** (lower-case)
//         Input : 1 --> 'a'
//         Input : 26 --> 'a', 'b', 'c', .... 'y', 'z'
//     */
//     int num = 1;
//     print_chars(num);
//     num = 10;
//     print_chars(num);
//     num = 26;
//     print_chars(num);
//     printf("\n============================================================================================\n");
// }

// void test5()
// {
//     /*
//         تابع زیر را برای خود دیباگ کنید و مطمئن شوید که مفهوم آن را درست متوجه می‌شوید
//         Advanced Pointers
//     */
//     int r = 20; 
//     int *ptr = &r; 
//     advance_pointer(ptr);
//     printf("%d\n", *ptr); 
//     advance_pointer2(ptr);
//     printf("%d\n", *ptr); 
//     printf("\n============================================================================================\n");
// }