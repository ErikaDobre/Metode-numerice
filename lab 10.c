#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main
{
    float x[100], y[100],n,i,l1,l2,l3;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("x[%f]=",i);
        scanf("%f",x[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("y[%f]=",i);
        scanf("%f",y[i]);
    }


    for(i=1;i<=n;i++)
    {
        l1[i]=sqrt((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]));
        l2[i]=sqrt((x[i+1]-x[0]))
    }
    return 0;
}
