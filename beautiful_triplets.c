#include <stdio.h>
int main()
{
    int n, d, cnt = 0, sum = 0, k = 0;
    scanf("%d %d", &n, &d);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 2; i++)
    {
        cnt = 0, k = i; //k-> stores the indices of the element
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] == arr[k] + d)
            {
                k = j; //k-> stores indices of element satisfying condition and traverse the very next indice
                cnt++;

                if (cnt == 2)
                { //finding next 2 elements of triplet
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
}
