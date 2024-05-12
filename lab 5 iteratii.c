#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,it,itmax;
    float s, a[50][50] , b[50] , eps, x[50] , y[50], max;
    printf("Dati ordinul matricei ");
scanf("%d",&n);
for(i=1;i<=n;i++) // citim elementele matricei
for(j=1;j<=n;j++)
{ printf("a[%d][%d]=",i,j);
scanf("%f",&a[i][j]);}
for(i=1;i<=n;i++) // citim termenii liberi
{ printf("b[%d]=",i);
scanf("%f",&b[i]); }
printf("Dati precizia "); // citim precizia dorită
scanf("%f",&eps);
printf("nr max de iterații"); // citim nr max de iterații dorit
scanf("%d",&itmax);
for(i=1;i<=n;i++) // citim aproximarea inițială
{ printf("x[%d]=",i);
scanf("%f",&x[i]); }
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
x[i]=y[i];
}
//for (i=1;i<=n;i++)
//x[i]=y[i];
it++;
printf("La iteratia %d se obtine: \n",it+1);
for (i=1;i<=n;i++)
{
x[i]=y[i];
printf("x[%d]=%f " ,i,x[i]);
}
printf("\n" );
it++;
}
while ((max>eps)&&(it<=itmax));
for (i=1;i<=n;i++)

{

printf("X%d= %f", i, x[i]);
printf("\n");

}
printf("it=%d",it);
return 0;
}
