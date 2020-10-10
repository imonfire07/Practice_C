//Pattern Recursively
#include <stdio.h>
void printPatternen(int n);
int main()
{
    int n;
    printf("Enter No of lines::\n");
    scanf("%d", &n);
    printPatternen(n);
    return 0;
}
void printPatternen(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPatternen(n - 1);
    //1 - 1
    //2 - 3
    //3 - 5
    //(2n-1)
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}