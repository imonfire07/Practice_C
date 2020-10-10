//Celcius To Farenhit
#include <stdio.h>
#include <math.h>

int main()
{
    float celcius = 37.0;
    float farenhit = (celcius * 9 / 5) + 32;

    printf("Celcius(%f) in farenhit is :%f", celcius, farenhit);
    return 0;
}