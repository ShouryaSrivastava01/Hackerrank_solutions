#include "stdio.h"
int main()
{
    int b, n, m, max = -1, maxCost = -1;
    scanf("%d %d %d", &b, &n, &m);
    int keyBoard[n], mouse[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &keyBoard[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &mouse[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (keyBoard[i] + mouse[j] <= b && keyBoard[i] + mouse[j] > max)
            {
                max = keyBoard[i] + mouse[j];
            }
            else
            {
                continue;
            }
        }
        if (max > maxCost)
        {
            maxCost = max;
        }
    }
    printf("%d", maxCost);
}
