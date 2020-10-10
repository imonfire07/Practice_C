//String Input
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30], str2[30];
    char c;
    int i = 0;
    printf("Enter first string::\n");
    scanf("%s", str1);
    // fflush(stdin);
    printf("Enter second string::\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';
    printf("First string is %s\n", str1);
    printf("Second string is %s\n", str2);
    printf("strcmp for these strings returns  %d", strcmp(str1, str2));
    return 0;
}