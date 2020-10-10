//Multiplication Table in reversed order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check its  multiplication table:\n\n");
    scanf("%d", &n);
    printf("****Multiplication Table of %d****\n", n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d  *  %d  = %d\n", n, i, n * i);
    }

    return 0;
}