#include "stdio.h"
#include "stdlib.h"
int main()
{
    int q, x = 0, y = 0, z = 0;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (abs(z - x) < abs(z - y))
        {
            printf("Cat A\n");
        }
        else if (abs(z - x) > abs(z - y))
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Mouse C\n");
        }
        x = 0;
        y = 0;
        z = 0;
    }
}
