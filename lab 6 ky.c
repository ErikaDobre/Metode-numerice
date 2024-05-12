#include <stdio.h>
#include <stdlib.h>
 int n,i,j,k,lin;
float a[100][100],b[101][101],x[100],S,piv,aux;
int main()
{
    printf("dati n =");
scanf("%d",&n);
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%f",&a[i][j]);
}
pas1:for (i=1;i<=n;i++)
{
printf("b[%d][%d]=",i,n);
scanf("%f",&b[i][n]);
}
for(j=n-1;j>=1;j--)
    for(i=1;i<=n;i++)
{
    b[i][j]=0;
    for(k=1;k<=n;k++)
        b[i][j]=b[i][j]+a[i][k]*b[k][j+1];
}
 for(i=1;i<=n;i++)
 { b[i][n+1]=0;
  for(k=1;k<=n;k++)
   b[i][n+1]=b[i][n+1]+a[i][k]*b[k][1];
   b[i][n+1]=-b[i][n+1];
 }
 for (i=1;i<=n;i++)
for (j=1;j<=n+1;j++)
printf("b[%d][%d]=%f\n",i,j,b[i][j]);
for (k=1;k<=n-1;k++)
{
    piv=fabs(b[k][k]);
lin=k;
for (i=k+1;i<=n;i++)
if (piv<fabs(b[i][k]))
{
piv=fabs(b[i][k]);
lin=i;
}
if (piv==0)
{
goto pas1;
}
if(lin!=k)
for (j=k;j<=n+1;j++)
{ aux=b[k][j];
b[k][j]=b[lin][j];
b[lin][j]=aux;
}
for (i=k+1;i<=n;i++)
for (j=k+1;j<=n+1;j++)
b[i][j]=(b[i][j]*b[k][k]-b[i][k]*b[k][j])/b[k][k];
}
x[n] = b[n][n+1]/b[n][n];
for (i=n-1;i>=1;i--)
{ S=0;
for(j=i+1;j<=n;j++)
S+=b[i][j]*x[j];
x[i]=(b[i][n+1]-S)/b[i][i];}
for (i=1;i<=n;i++)
{
printf("X%d= %f", i, x[i]);
printf("\n");
}
}
