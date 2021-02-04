#include "stdio.h"
int main()
{
    int n, k, max = 0;
    scanf("%d %d", &n, &k);
    int height[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
        if (height[i] > max)
        {
            max = height[i];
        }
    }
    if (max - k > 0)
    {
        printf("%d", max - k);
    }
    else
    {
        printf("0");
    }
}
