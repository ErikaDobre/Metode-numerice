#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 float g(float x)
 {
     return sqrt(10)/sqrt(x+4);
 }

int main()
{
    float eps, x[100],dif;
    int itmax,i;
    printf("x[0]=");
    scanf("%f",&x[0]);
    printf("eps=");
    scanf("%f",&eps);
    printf("itmax=");
    scanf("%d",&itmax);
    i=1;
    while(i<=itmax)
    {
        x[i]=g(x[i-1]);
        dif=fabs(x[i]-x[i-1]);
        if(dif<=eps)
        {
            printf("x[%d]=%f",i,x[i]);
            exit(0);
        }
        else
        {
            i=i+1;
        }
    }
    if(i>itmax)
    {
        printf("s-a depasit numarul de iteratii");
    }
    return 0;
}
