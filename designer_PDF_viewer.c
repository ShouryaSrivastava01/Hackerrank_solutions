#include "stdio.h"
#include "string.h"
int main()
{
    int height[26], i, a, b, max = 0, area;
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &height[i]);
    }
    char word[11];
    scanf("%s", word);
    a = strlen(word);
    for (i = 0; i < a; i++)
    {
        b = word[i] - 97;
        if (height[b] > max)
        {
            max = height[b];
        }
    }
    area = max * a;
    printf("%d", area);
}
