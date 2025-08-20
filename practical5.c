#include<stdio.h>
void main()
{
float TW,TM,LR,TLW,TLM,TIW,TIM;
long int tp;
long int TP=1441981744;
printf(" \n population of india in 2024:%f ",TP);
TW=48.4*TP/100;
printf("\n total women in india:%f",TW);
TM=TP-TW;
printf("\n total men in india:%f",TM);
LR=85.96*TP/100;
printf("\ntotal literate people in india :%f",LR);
TLW=62.84*LR/100;
printf("\nliterate women:%f",TLW);
TLM=80.95*LR/100;
printf("\nliterate MEN:%f",TLM);
TIW=LR-TLW;
printf("\ninliterate women:%f",TIW);
TIM=LR-TLM;
printf("\ninliterate men:%f",TIM);




}