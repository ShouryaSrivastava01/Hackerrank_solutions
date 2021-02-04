#include <stdio.h>

int main()
{
    long int p, q, cnt = 0;
    long long int m, n;
    scanf("%ld", &p);
    scanf("%ld", &q);
    while (p <= q)
    {
        long int a = 0, b = 0, i = 0, l = 0;

        n = m = p * p;
        while (n > 0) //counting number of digits p*p
        {
            n = n / 10;
            l++;
        }
        int arr[l];
        for (int i = (l - 1); i >= 0; i--)
        {
            arr[i] = m % 10;
            m = m / 10;
        }

        if (l % 2 == 0) // l-> number of digits even. eg  2453 -> 24+53
        {
            while (i < l / 2)
            {
                a = a * 10 + arr[i];
                b = b * 10 + arr[i + l / 2];
                i++;
            }
        }
        else // l-> number of digits odd. eg 225 -> 2+25
        {
            b = arr[l / 2];

            while (i < l / 2)
            {
                a = a * 10 + arr[i];
                b = b * 10 + arr[i + 1 + l / 2];
                i++;
            }
        }
        if (a + b == p)
        {
            cnt++; //counting whether any number exist inclusively in the given range
            printf("%ld ", p);
        }

        p++;
    }
    if (cnt == 0)
    {
        printf("INVALID RANGE");
    }
}
