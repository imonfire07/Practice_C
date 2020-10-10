//prime
#include <stdio.h>

int main()
{
    int n, prime = 1, i = 2;
    printf("ENter a Number::\n");
    scanf("%d", &n);
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i <= n / 2);
    if (prime == 0 && n != 2)
    {
        printf("%d is NOT PRIME.", n);
    }
    else
    {
        printf("%d is PRIME", n);
    }
    return 0;
}