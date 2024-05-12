#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x, float y )
{
    x=4*x-2*x*x+y;
}
int main()
{
    int n,i;
    float x[100],y[100];
    float h, u, uu,v, vv,m,mm;
    printf("n=");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
{
   printf("x[%d]=",i);
   scanf("%f",&x[i]);
}

    printf("y[%d]=",0);
    scanf("%f",&y[0]);

    printf("h=");
    scanf("%f",&h);

     i=0;
   do
   {
       u=x[i];
uu=x[i+1];
v=y[i];
h=uu-u;
m=x[i]+h/2;
mm=v+(h/2)*f(u,v);
vv=v+h*f(m,mm);
y[i+1]=vv;
       printf("valoarea aproximativa a solutiei in punctul %f este %f\n",uu,vv);
       i++;
   }while(i!=n);
   return 0;
}
