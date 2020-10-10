#include <stdio.h>
void printAddress(int a);
int main()
{
    int i = 5;
    printAddress(i);
    printf("The address of i is %u\n", &i);
    return 0;
}
void printAddress(int a)
{
    printf("The address of variable a is %u\n", &a);
}