#include <stdio.h>
int main()
{
    int n, x = 0, count = 0;
    scanf("%d", &n);
    char hike[n];
    int arr[n];
    scanf("%s", hike);
    for (int i = 0; i < n; i++)
    {
        if (hike[i] == 'U')
        {
            x++;
            arr[i] = x;
        }
        else
        {
            x = x - 1;
            arr[i] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && arr[i + 1] == 0)
        {
            count++;
        }
    }
    printf("%d", count);
}
