#include<stdio.h>
int main()
{
    int age;
    printf("welcome to amusement park!! ");
    printf("\n enter the age of :");
    scanf("%d",&age);
    if(age<0)
    printf("\nenter validate age");
    else if(age<12)
    printf("\nyou are child enjoy park without ticket");
    else if(age>=12&&age<=60)
    printf("\nyou have to pay entry fees 150 ruppes");
    else 
    printf("\n sorry!! you are not eligible for amusement park ");
    printf("\n bhesdadiya palasi_25CE008");
    return 0;


}