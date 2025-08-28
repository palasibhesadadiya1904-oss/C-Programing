#include<stdio.h>
int main()
{ int age,ticket_fees;
    ticket_fees=200;
    printf("welcome at the sunrise amusement park");
    printf("\nenter ypur age:");
    scanf("%d",&age);
    if(age<12)
    {printf("\nenjoy amusement park without any fees");}
    else if(age>=12&&age<=60)
    {printf("\nyou have to pay fees of amusementpark:%d",ticket_fees);}
    else if(age>60)
    {printf("\nsorry ! you are not able for entry");}
return 0;
}