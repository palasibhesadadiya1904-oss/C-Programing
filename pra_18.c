#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the size of table vertically:");
    scanf("%d",&n);
    printf("enter the size of table horizontally:");
    scanf("%d",&m);
    printf("multiplication table (%d X %d)\n",n,m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        printf(" %d ",i*j);
        printf("\n");
    }
    printf("bhesdadiya palasi_25CE008");
}
