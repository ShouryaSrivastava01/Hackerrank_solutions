#include <stdio.h>
#include <string.h>
int main()
{

    long long int n, cnt = 0, j = 0, r = 1;
    char s[100];
    scanf("%s", s);

    scanf("%lld", &n);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            cnt++;
        }
    }
    r = n / strlen(s);
    //printf("%lld", cnt);
    cnt = cnt * r;
    n = n % strlen(s);
    if (n != 0)
    {

        while (j < n)
        {
            if (s[j] == 'a')
            {
                cnt++;
            }
            j++;
        }
    }

    printf("%lld", cnt);
}