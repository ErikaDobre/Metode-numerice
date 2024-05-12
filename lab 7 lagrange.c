#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, k;
float z,f[100],x[100], L, P;
printf("n=");
scanf("%d",&n);
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
printf("z=");
scanf("%f",&z);
if ((z>x[0]) && (z<x[n]))
{
L=0;
for (k=0;k<=n;k++)
{ P=1;
for (i=0;i<=n;i++)
if (i!=k)
P=P*(z-x[i])/(x[k]-x[i]);
L+=f[k]*P;
}
printf("\n valoarea aproximată a functiei f în %f este %f",z,L);
}
else printf("Punctul nu apartine intervalului");
}
