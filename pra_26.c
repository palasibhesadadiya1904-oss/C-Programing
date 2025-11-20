#include<stdio.h>
#include<math.h>

void inputsides(float *a,float *b,float *c)
{
    printf("Enter sides:");
    scanf("%f %f %f",a,b,c);

}
int arepositive(float a,float b,float c)
{
    return (a>0 && b>0 && c>0);
}
int isvalidtriangle(float a,float b,float c)
{
    return (a+b>c && b+c>a && a+c>b);
}
int calculatearea(float a,float b,float c)
{
    float s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    float a,b,c,area;
    void processtriangle()
    {
        if(!arepositive(a,b,c))
        {
            printf("enter positive sides");
            return;
        }
        else if(!isvalidtriangle(a,b,c))
        {
            printf("enter valid sides");
            return;
        }
        area=calculatearea(a,b,c);
        printf("Area is %f",area);
    }
    inputsides(&a,&b,&c);
    processtriangle();
    printf("\n bhesdadiya palasi_25CE008");

}
