#include <stdio.h>
void sumAndAverage(int a, int b, int *sum, float *avg);
int main()
{
    int i = 5, j = 6, sum;
    float avg;
    sumAndAverage(i, j, &sum, &avg);
    printf("The value of sum is ::%d\n", sum);
    printf("The value of average is ::%f\n", avg);
    return 0;
}
void sumAndAverage(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
