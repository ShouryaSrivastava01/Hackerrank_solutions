#include "stdio.h"
int main()
{
    int n, max = 0;
    scanf("%d", &n);
    int arr[n], b[99] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        b[arr[i]] += 1;
    }
    max = b[0] + b[1];
    for (int i = 1; i < 98; i++)
    {
        if (b[i] + b[i + 1] > max || b[i] + b[i + 1] == max)
        {
            max = b[i] + b[i + 1];
        }
    }

    printf("%d", max);
}
