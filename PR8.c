#include<stdio.h>
int main()
{
   int age;
    printf("welcome spark saving bank!");
    printf("\n enter the age of :");
    scanf("%d",&age);
    if(age<0)
    printf("\nenter validate age");
    else if(age<18)
    printf("\nyou are not eligible for saving account");
    else if(age>=18&&age<=59)
    printf("\neligible for regular saving account");
    else 
    printf("\nyou are eligible for senior citizen account");
     printf("\n bhesdadiya palasi_25CE008");
    return 0;


}