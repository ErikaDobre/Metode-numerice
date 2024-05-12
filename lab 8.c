#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
int i, j, n, k, lin;
float z, s,l[100][100],x[100], a[100], f[100], piv, aux;
printf("dati n=");
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
for (i=1;i<=n+1;i++)
for (j=1;j<=n+1;j++)
l[i][j]=pow(x[i-1],n-j+1);
for(i=1;i<=n+1;i++)
l[i][n+2]=f[i-1];
n=n+1;
for (k=1;k<=n-1;k++)
{
//
piv=fabs(l[k][k]);
lin=k;
for (i=k+1;i<=n;i++)
if (piv<fabs(l[i][k]))
{
piv=fabs(l[i][k]);
lin=i;
}
if (piv==0)
{
printf("sistemul nu are solutie unica");
exit(1);
}

if (lin!=k)
for(j=k;j<=n+1;j++)
{
aux=l[k][j];
l[k][j]=l[lin][j];
l[lin][j]=aux;
}
//
for (i=k+1;i<=n;i++)
for (j=k+1;j<=n+1;j++)
l[i][j]=(l[i][j]*l[k][k]-l[i][k]*l[k][j])/l[k][k];
}
x[n]=l[n][n+1]/l[n][n];
for (i=n-1;i>=1;i--)
{
s=0;
for(j=i+1;j<=n;j++)
s+=l[i][j]*x[j];
x[i]=(l[i][n+1]-s)/l[i][i];
}
for (i=1;i<=n;i++)
{
printf("x%d=%f",i,x[i]);
printf("\n");
}
}
