#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, k, j, m;
float z[10],f[100],x[100], L, P;
printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);
for (i=0;i<=n;i++)
{
printf("x[%d]=",i);
scanf("%f",&x[i]);
}

for (i=0;i<=n;i++)
{
printf("f[%d]=",i);
scanf("%f",&f[i]);
}
for (i=1;i<=m;i++)
{
printf("z[%d]=",i);
scanf("%f",&z[i]);
}
for(j=1;j<=m;j++)
{
if ((z[j]>x[0]) && (z[j]<x[n]))
{
L=0;
for (k=0;k<=n;k++)
{
if (f[k]!=0)
{
P=1;
for (i=0;i<=n;i++)
if (i!=k)
P=P*(z[j]-x[i])/(x[k]-x[i]);
L+=f[k]*P;
}
}
printf("\n valoarea aproximată a functiei f în %f este %f",z[j],L);
}
else printf("Punctul nu apartine intervalului");
}
}
