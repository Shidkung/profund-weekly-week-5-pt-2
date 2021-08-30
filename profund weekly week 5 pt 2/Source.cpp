#include <stdio.h>

int main()

{
    int i, j, n;
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (i < j)
                printf(" ");
            else
                printf("*");
            if (i <= 2 * n - j)
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}