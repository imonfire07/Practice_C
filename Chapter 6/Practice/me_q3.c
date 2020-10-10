//Call Refernece
#include <stdio.h>
void func(int *ptr);
int main()
{
    int a = 10, *ptr;
    ptr = &a;
    printf("The value of a is %d\n", a);
    func(ptr);
    printf("After function call the value of a is %d\n", a);
    return 0;
}
void func(int *ptr)
{
    *ptr += 10;
}