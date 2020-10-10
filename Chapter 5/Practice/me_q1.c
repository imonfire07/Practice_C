//Average of three numbers using function

#include <stdio.h>

float average(int a, int b, int c);

float average(int x, int y, int z)
{
    float result = (float)(x + y + z) / 3; //Type casting because the result of two int is int
    return result;
}

int main()
{
    int x = 4, y = 4, z = 9;
    float r;
    r = average(x, y, z);
    printf("The avergae is %f\n", r);
    return 0;
}
