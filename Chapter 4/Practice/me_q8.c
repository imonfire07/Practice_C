//Factorial
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a number to get the Factorial");
    scanf("%d", &n);
    //5! = 1*2*3*4*5 = 120
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Facorial of %d is :: %d", n, factorial);
    return 0;
}