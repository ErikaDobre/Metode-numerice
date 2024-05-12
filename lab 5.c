#include <stdio.h>
#include <stdlib.h>

int main()
{ int n, i,j,it,itmax;
  float s,a[50][50], b[50],eps,x[50],y[50],max,c;
    printf("Dati ordinul matricei ");
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{ printf("a[%d][%d]=",i,j);
scanf("%f",&a[i][j]);}
for(i=1;i<=n;i++)
{ printf("b[%d]=",i);
scanf("%f",&b[i]); }
printf("Dati precizia ");
scanf("%f",&eps);
printf("nr max de iterații");
scanf("%d",&itmax);
for(i=1;i<=n;i++)
{ printf("x[%d]=",i);
scanf("%f",&x[i]); }
 c=0;
for(i=1;i<=n;i++)
{
    s=0;
    for(j=1;j<=n;j++)
        if (j!=i)
        s=s+fabs(a[i][j]);
    if(fabs(a[i][i])>s)
    {printf("nu avem");
        c=c+1;}
}
if(c!=n)
    printf("Matricea nu este diagonal dominanta");
    else
{
it=0;
do
{
max=0;
for (i=1;i<=n;i++)
{
s=0;
for (j=1;j<=n;j++)
if(j!=i)
s+=a[i][j]*x[j];
y[i]=(b[i]-s)/a[i][i];

if (max<fabs(y[i]-x[i]))
max=fabs(y[i]-x[i]);

}
for (i=1;i<=n;i++)
x[i]=y[i];
it++;
}
while ((max>eps)&&(it<=itmax));
for (i=1;i<=n;i++)

{

printf("X%d= %f", i, x[i]);
printf("\n");

}
}


printf("it=%d",it);
return 0;
}
