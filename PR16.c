#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("table of%d\n",n);
    for(i=10;i>=1;i--)
    {
        
        printf("%d \n",n*i);
    }
    return 0;
    
}