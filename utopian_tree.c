#include "stdio.h"
int main()
{
    int t, n, sum = 1;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++)
    {
        sum = 1;
        for (int j = 0; j <= arr[i]; j++)
        {
            if (j == 0)
            {
                sum = 1;
            }
            else if (j % 2 != 0)
            {
                sum = sum * 2;
            }
            else
            {
                sum = sum + 1;
            }
        }
        printf("%d\n", sum);
    }
}
