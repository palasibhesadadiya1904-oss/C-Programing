#include<stdio.h>
int main()
{
    int amount;
    float final_amount,discount;
    printf("enter amount:");
    scanf("%d",&amount);
    if(amount<0)
    printf("enter valid amount");
    else if(amount<1000)
    printf("no discount on this amount");
    else if(amount>=1000&&amount<=5000)
  {  printf("you get 10 percantag discount on bill");
    discount=amount*10.0/100;
    final_amount=amount-discount;
    printf("\nfinal_amount:%f",final_amount);
  }
    else if(amount>5000)
  {  printf("you get 20 percantag discount on bill");
    discount=amount*20.0/100;
    final_amount=amount-discount;
    printf("\nfinal_amount:%f",final_amount);
  }
   printf("\n bhesdadiya palasi_25CE008");
  return 0;
}
