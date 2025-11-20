#include<stdio.h>
int main()
{
    int amount,balance=5000,choice;
    printf("welcome to national bank of bharat! ");
    printf("\nyour current balance is=%d",balance);
    printf("\n1.withdraw\n 2.deposite\n3.your current balance \n 0.exit");
    while(1)
    {
        printf("\nenter your choice according to you:");
        scanf("%d",&choice);
        if(choice==0)
        {
             break;
        }
        switch (choice)
            {
                case 1:
                printf("enter amount which you want to withdraw:");
                scanf("%d",&amount);
                if(amount>0 && amount<=5000)
                {
                    balance=balance-amount;
                    printf("your balance is:%d",balance);
                }
                else
                {
                    printf("enter valid amount");
                }
                break;

                case 2:
                if(amount>0)
                {
                    printf("enter amount which you want to deposite:");
                    scanf("%d",&amount);
                    balance=balance+amount;
                    printf("your balance is:%d",balance);
                }
                else
                {
                    printf("enter valid amount");
                }
                break;
                case 3:
                printf("current balance=%d",balance);
                break;

                default:
                printf("invalide choice");
                break;
            }
    }
    printf("bhesdadiya palsi");
    return 0;   
}