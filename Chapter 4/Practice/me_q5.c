//Sum of First 10 numbers..

#include <stdio.h>

int main()
{
    int sum = 0, i = 0, n = 10;
    /*while (i <= n)
    {
        sum += i;
        i++;
    } */
    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("Sum of First 10 natural numbers is:: %d\n", sum);
    printf("The Loop has executed %d times\n", i);
    return 0;
}