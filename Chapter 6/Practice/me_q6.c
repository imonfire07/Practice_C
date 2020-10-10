#include <stdio.h>
void func(int a);
int main()
{
    int a = 10;
    printf("The value of a is %d\n", a);
    func(a);
    printf("After function call a is still %d\n", a);
    return 0;
}
void func(int a)
{
    printf("In function a is %d\n", a);
    a += 10;
    printf("After increment in function a is %d\n", a);
}