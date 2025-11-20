#include<stdio.h>
int main()
{
    int n,expected_sum,origenal_sum=0;
    printf("enter number of students:");
    scanf("%d",&n);
    expected_sum=(n*(n+1))/2;
    printf("enter present student id no.:\n");
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        origenal_sum=origenal_sum+a[i];
    }
    printf("absent no. is:%d",expected_sum - origenal_sum);
    printf("\n bhesdadiya palasi_25CE008");
    return 0;
}
