//Simple Interest
#include <stdio.h>

int main()
{
    int principal = 1000, rate = 5, time = 1;
    int simpleInterest = (principal * rate * time) / 100;
    printf("The value of simple interest is: %d\n", simpleInterest);
    return 0;
}