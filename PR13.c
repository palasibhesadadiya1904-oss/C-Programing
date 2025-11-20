#include<stdio.h>
#include<unistd.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%10==0)
        {
            printf("current water level:%dliters\n",i);
            sleep(2);
        }
    }
    printf("tank is full!!");
    printf("bhesdadiya palsi_25CE008");
}