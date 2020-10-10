//Force

#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter mass in KGS::\n");
    scanf("%f", &m);
    printf("Force in Newton is :: %.2f\n", force(m));
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}