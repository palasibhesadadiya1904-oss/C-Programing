#include <stdio.h>
int main()
{
    int i, j,n = 9,spaces;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        printf("%d", i);
        spaces = (n - 2 * i + 1) * 2 - 1;
        for (j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        if (i != 5)
        {
            printf("%d", n - i + 1);
        }
        printf("\n");
    }
     printf("bhesdadiya palasi_25CE008");
    return 0;
}
