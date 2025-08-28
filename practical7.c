#include<stdio.h>
int main()
{ int  entry_fees=200,age;
    printf("welcome in amusement park!! \n ");
    printf("enter your age: ");
    scanf("%d",&age);
    {
    if(age<=0)
    {printf("age must be in positive numbers \n ");}
    else if(age<12)
   { printf("enjoy without any charges \n ");}
   else if(age>=12&&age<=60)
   {printf("you hae to pay fees for enjoyment:%d \n ",entry_fees);}
   else if(age>60)
   {printf("sorry you are not eligible for amusmentpark! \n ");}
    }
 return 0;
}