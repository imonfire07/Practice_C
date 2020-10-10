//Pointes
#include <stdio.h>

int main()
{
    int a = 10, *p;
    p = &a;
    printf("Address of a :: %u\n", p);
    printf("Value at a::%d", *p);
    return 0;
}