#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("enter your weight in kilograms:");
    scanf("%f",&weight);
     printf("enter your height in meter:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("BMI is :%.2f",BMI);
    if(BMI<18.5)
    {
        printf("\n you are underweight");
    }
    else if(BMI>=18.5&&BMI<=24.9)
    {
    printf("\n you are healthy");
    }
    else
    {
        printf("\n you are overweight");
    }
      printf("\n bhesdadiya palasi_25CE008"); 
    return 0;
}