#include<stdio.h>
int main()
{
    int mark;
    printf("enter the vlaue of your mark:");
    scanf("%d",&mark);
    if(mark>=90)
    {
        printf("A Grade");
    }
    else if(mark>=80 && mark<90)
    {
        printf("B Grade");
    }
    else if(mark>=70 && mark<80)
    {
        printf("C Grade");
    }
    else if(mark>=60 && mark<70)
    {
        printf("D Grade");
    }
    else
    {
       
        printf("F Grade");
    }
    printf("\n bhesdadiya palasi_25CE008");
    return 0;
}