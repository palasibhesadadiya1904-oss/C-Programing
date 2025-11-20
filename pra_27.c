#include<stdio.h>
int fibo(int n);
int main()
{
    int n,sum=0;
    printf("Enter the months:\n");
    scanf("%d",&n);
    printf("series of the savings amount:");
    for (int i= 1 ; i<=n ; i++)
    {
        printf("%d  ",fibo(i));
        sum+= fibo(i);
    }
    printf("\nYour total savings is %d",sum);
    printf("\nbhesdadiya palasi_25CE008");
    return 0;
}

int fibo(int n)
{
    int result;
    if( n==1 || n==2 )
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}
