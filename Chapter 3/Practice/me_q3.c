//Income Tax

#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter Your net income::\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax += 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax += 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax += 0.3 * (income - 1000000);
    }

    printf("The tax to be paid is :: %f\n", tax);
    printf("%f", income);
    return 0;
}