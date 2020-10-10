//Length function
#include <stdio.h>
int strlenn(char *ptr)
{
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char arr[] = "Tanmay";
    int l = strlenn(arr);
    printf("The lenght of th string is :: %d ", l);
    return 0;
}