//2D array Multiplicationn table
#include <stdio.h>
void printTable(int *, int, int);
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[0], 7, 10);
    printTable(mulTable[0], 9, 10);
    return 0;
}
void printTable(int *mulTable, int num, int n)
{
    printf("The Multiplication table of %d\n ", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("*************************************************************************\n\n");
}