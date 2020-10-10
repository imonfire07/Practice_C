//Reverse an array
// #include <stdio.h>

// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *ptr = &a[9];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The reverse array is ::%d\n", *ptr);
//         ptr--;
//     }
//     return 0;
// }

#include <stdio.h>
void reverse(int *, int);
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(a, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++) //must be n/2 otherwise it will get reversed twice
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}