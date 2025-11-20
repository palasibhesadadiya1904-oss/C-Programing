#include<stdio.h>
void main()
{
    int i,j,n,m,seat,row,column;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("enter the value of seat you want to reserve:");
    scanf("%d",&seat);
    if(seat>n*m)
    {
        printf("enter valide seat");
        return 0;
    }
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<seat;i++)
    {
        printf("\n enter the value of row and column for seat reserve:");
        scanf("%d %d",&row,&column);
        if(row>=0 && row<=n && column>=0 && column<=m)
        {
           if( a[row-1][column-1]==1)
           {
               printf("\n seat is already reserved!!");
               i--;
           }
           else
           {
               a[row-1][column-1]=1;
           }
        }

        else
        {
            printf("invalide seat position! try again\n");
            i--;
        }
    }
    printf("---seat reserve chart---\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",i+1);
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                printf("R ");
            }
            else
            {
                printf("A ");
            }
        }
        printf("\n");
    }
        printf("bhesdadiya palasi_25CE008");
}
