#include<stdio.h>
void main()
{
float area,perimeter;
float length,breadth;
float fencingrate=50.0; // fencingrate per meter
float grassrate=30.0;// grassrate per sq mater
float fencingcost,grassingcost;
  printf("enter value of length in meters:");
  scanf("%f",&length);
printf("enter value of breadth in meters:");
  scanf("%f",&breadth);
  // input validation
  if (length<=0||breadth<=0)
  printf("input is invalid masurments must be in positive numbers");
  // caculations
  area=length*breadth;
  perimeter=2*(length+breadth);
  fencingcost=perimeter*fencingrate;
  grassingcost=area*grassrate;
  printf("area of farm is=%f\n",area);
   printf("perimeter of farm is=%f\n",perimeter);
printf("fencingcost is:%f\n",fencingcost);
printf("grassingcostis:%f\n",grassingcost);




}