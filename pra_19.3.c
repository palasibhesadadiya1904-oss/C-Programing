#include<stdio.h>
void main()
{
    int n=9;
    int mid=(n+1)/2;
    for(int i=mid;i>=1;i--)
    {
        for(int s=0;s<mid-i;s++)
        {
            printf("  ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d ",j);
        }
         printf("\n");
    }
    for(int i=2;i<=mid;i++)
    {
        for(int s=0;s<mid-i;s++)
        {
            printf("  ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d ",j);
        }
         printf("\n");
    }
        printf("bhesdadiya palasi_25CE008");
}
