//Celcisu to fahrenheit using functions

#include <stdio.h>
float temp(float c);
int main()
{
    float c;
    printf("Enter temperature in celcius::\n");
    scanf("%f", &c);
    printf("The temperature in fahrenheit is %.2f\n", temp(c));
    return 0;
}

float temp(float c)
{
    return ((c * 9 / 5) + 32);
}