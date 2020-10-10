#include <stdio.h>

int main()
{
    int n = 8, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
    }
    printf("Sum of the number occuring the table 8 is:%d", sum);
    return 0;
}