#include <stdio.h>

int main()
{
    int n, factorial = 1, i = 1;
    printf("Enter a number to get the Factorial");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("Facorial of %d is :: %d", n, factorial);
    return 0;
}