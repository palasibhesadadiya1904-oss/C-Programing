#include <stdio.h>
void main()
{
    int i,j,n=4,space;
    for (i = 1; i <= n; i++)
    {
        for (space = n; space > i; space--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (space = n; space > i; space--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
        printf("bhesdadiya palasi_25CE008");
}
