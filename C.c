#include <stdio.h>
 
int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
    int a = 10;
    printf("Size of a: %lu bytes\n", sizeof(a));
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of a: %d\n", *(&a));
    return 0;
}