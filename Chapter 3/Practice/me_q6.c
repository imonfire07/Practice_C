//Greatest among 6 numbers
#include <stdio.h>

int main()
{
    int a, b, c, d;
    int max;
    printf("Enter 4 Number to check the greatest of them:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = a;
    if (b > a)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    printf("Max is %d", max);
    return 0;
}