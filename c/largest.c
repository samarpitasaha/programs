#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("numer of elements ");
    scanf("%d", &n);
    printf("\nEnter %d Numbers:\n", n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int g = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > g)
        {
            g = a[i];
        }
    }

    printf("largest=%d", g);
}