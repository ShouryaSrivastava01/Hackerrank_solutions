#include "stdio.h"
#include <string.h>

int main()
{
    int hh, mm, ss, zone;
    char a[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, a);
    int p = strcmp(a, "AM");
    if (p == 0)
    {
        zone = 0;
        if (hh == 12)
        {
            hh = 00;
        }
    }
    else
    {
        zone = 12;
        if (hh == 12)
        {
            hh = 00;
        }
    }

    int HH = zone + hh;
    printf("%.2d:%.2d:%.2d", HH, mm, ss);
}
