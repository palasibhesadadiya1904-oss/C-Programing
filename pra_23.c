#include <stdio.h>
int main()
{
    int item[100],n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    printf("Enter the price of fruit that selled in different days:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &item[i]);
    }
    int minPrice = item[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int profit = item[i] - minPrice;
        if (profit > maxProfit)
            maxProfit = profit;
        if (item[i] < minPrice)
            minPrice = item[i];
    }
    printf("Maximum Profit after %d days is = %d\n",n,maxProfit);
    printf("bhesdadiya palasi_25CE008");
    return 0;
}
