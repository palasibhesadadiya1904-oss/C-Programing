#include<stdio.h>
int main()
{
float weight,height,BMI;
printf("enter your weight in kilograms:");
scanf("%f",&weight);
printf("enter your height in meters:");
scanf("%f",&height);
// calculations
if (weight<=0||height<=0)
{printf("weight and height must be positive numbers\n");}
else
{BMI=weight/(height*height);
printf("your BMI is=%f \n ",BMI);
}
if (BMI<=18.5)
{printf("you are under weight\n");}
else
if(BMI>=18.5||BMI<=24.9)
{printf("you are healthy\n");}
else 
{printf("you are overweight\n");}
return 0;
}




