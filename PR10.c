#include<stdio.h>
int main()
{
    int choose,quantity,amount;
    float total=0,total_amount=0,discount;
    printf("welcome to FOODIEE restaurant!! ");
    printf("\nchoose item from given menu");
    printf("\n1.Burger=150 rs.");
    printf("\n 2.Pizza=200 rs.");
    printf("\n 3.Pasta=120 rs.");
    printf("\n 4.sandwich=100 rs.");
    printf("\n 5.frenchfries=80 rs.");
    printf("\n enter 0 to finish your order.");
    while(1)
    {
        printf("\nchoose any one number for order:");
        scanf("%d",&choose);
        if(choose==0)
        {
            break;
        }
        printf("\nenter quantity:");
        scanf("%d",&quantity);
        switch(choose)
        {
            case 1:
            printf("\nyou pay 150 rs. for each burger");  
            amount=150;

            total+=(quantity*amount);
            break;

            case 2:
            printf("\nyou pay 200 rs. for  each pizza");
            amount=200;
            total+=(quantity*amount);
            break;

            case 3:
            printf("\nyou pay 120 rs. for each pasta");
            amount=120;
            total+=(quantity*amount);
            break;

            case 4:
            printf("\nyou pay 100 rs. for each sandwitch");
            amount=100;
            total+=(quantity*amount);
            break;

            case 5:
            printf("\nyou pay 80 rs. for  each french fries");
            amount=80;
            total+=(quantity*amount);
            break;

            default:
            printf("\nyou have enter wrong value");
            break;
        }
       
    }
     printf("\ntotal=%.2f",total);
     if(total>500)
        {
            printf("\nyou have 10 persant discount");
            discount=10.0/100;
            total_amount=total-(total*discount);
            printf("\ntotal amount=%.2f",total_amount);
        }
        else
        {
            printf("\nyour total amount is <500 so have no discount");
        }
         printf("\n bhesdadiya palasi_25CE008");
    }
