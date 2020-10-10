//Requires total 40% and at least 33% in each 3 subjects to pass

#include <stdio.h>

int main()
{
    int maths, chemistry, physics;
    float total;

    printf("Enter marks of maths:\n");
    scanf("%d", &maths);

    printf("Enter marks of chemistry:\n");
    scanf("%d", &chemistry);

    printf("Enter marks of physics:\n");
    scanf("%d", &physics);

    total = (maths + chemistry + physics) / 3;

    if (total < 40 || maths < 33 || chemistry < 33 || physics < 33)
    {
        printf("Your total marks is %f and you fail", total);
    }
    else
    {
        printf("Your total marks is %f and you pass", total);
    }

    return 0;
}