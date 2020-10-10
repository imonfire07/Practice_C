//Prime numbers

#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter a Number to check::");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is NOT PRIME.", n);
    }
    else
    {
        printf("%d is PRIME", n);
    }
    return 0;
}