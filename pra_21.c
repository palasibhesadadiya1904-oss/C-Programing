#include<stdio.h>
void main()
{
    int n,i,positive=0,negative=0,even=0,odd=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value of element for a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("total number of positive numbers:%d\n",positive);
    printf("total number of negative numbers:%d\n",negative);
    printf("total number of even numbers:%d\n",even);
    printf("total number of odd numbers:%d\n",odd);
        printf("bhesdadiya palasi_25CE008");

}
