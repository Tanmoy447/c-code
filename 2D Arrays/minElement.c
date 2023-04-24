#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {17, 2, 3, 45, 5, 66, 77, 10, 9};
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
                printf("\nThe minimum index is (%d,%d )", i, j);
              //break;
            }
        }
        // printf("\n");
    }
    printf("\nThe minimum is %d\n", min);
    return 0;
}
