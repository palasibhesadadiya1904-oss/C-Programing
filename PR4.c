#include<stdio.h>
#include <limits.h>
#include<float.h>
int main()
{
    printf("char=%d bytes\n",sizeof(char));
    printf("char= %dto %d\n",CHAR_MIN,CHAR_MAX);
    printf("double=%d bytes\n",sizeof(double));
     printf("double= %eto %e\n",DBL_MIN,DBL_MAX);
    printf("long=%d bytes\n",sizeof(long));
    printf("long= %ldto %ld\n",LONG_MAX,LONG_MAX);
    printf("int=%d bytes\n",sizeof(int));
    printf("int= %dto %d\n",INT_MIN,INT_MAX);
    printf("float=%d bytes\n",sizeof(float));
    printf("float= %e to %e",FLT_MIN,FLT_MAX);
    printf("\n bhesdadiya palasi_25CE008"); 
    return 0;

    
}