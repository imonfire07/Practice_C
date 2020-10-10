//Lower case of not

#include <stdio.h>

int main()
{
    //97-122 = a-z
    char ch;
    printf("Enter a character to check::");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122) //(97<=ch<=122)
    {
        printf("It is Lower Case");
    }
    else
    {
        printf("It is not Lower Case!!");
    }

    return 0;
}