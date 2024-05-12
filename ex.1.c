#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float f(float x)
{
  return pow(x,3)+4*pow(x,2)-10;
}
float df(float x)
{
    return 3*pow(x,2)+8*x;
}
float g(float x)
{
    return sqrt(10)/sqrt(x+4);
}

int main()
{
    float eps, x0, dif;
    int itmax, i;
    printf("x0=");
    scanf("%f",&x0);
    printf("itmax=");
    scanf("%d",&itmax);
    printf("eps=");
    scanf("%f",&eps);
    i=1;
    while(i<=itmax)
    {
        x[i]=x[i-1]-f(x[i-1])(df(x[i-1]));
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
            printf("s-a depasit nr max de iteratii ");
        }

    return 0;

}
