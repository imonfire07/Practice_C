//Pointer to Pointer
#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr, **r;
    ptr = &a;
    r = &ptr;
    printf("%d\n", *ptr);
    printf("%d", *(*r));
    return 0;
}