#include "stdio.h"
int main()
{
    int n, p, front, back, page = 0;
    scanf("%d", &n);
    scanf("%d", &p);

    if (n % 2 == 0 & (n - p) == 1)
    {
        front = p / 2;
        back = 1;
    }
    else
    {
        front = p / 2;
        back = (n - p) / 2;
    }
    if (front > back)
    {
        page = back;
    }
    else if (back > front)
    {
        page = front;
    }
    else
    {
        page = front;
    }
    printf("%d", page);
}
