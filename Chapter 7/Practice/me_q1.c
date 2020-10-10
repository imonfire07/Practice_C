#include <stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr;
    if ((ptr + 2) == &arr[2])
        printf("\nThis points to the same location in memory!!\n");
    else
        printf("This doesn't point to the same location in memory!!\n");

    // int a[5] = {1, 2, 3, 4, 5};
    // printf("%d\n", *(a + 4)); //5
    // printf("%d\n", a[4]); //5
    return 0;
}