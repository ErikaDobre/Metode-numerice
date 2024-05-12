#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,i,j,k,lin;
  float S,a[50][51],x[50],aux,piv;
  printf("dati n=");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
    for(j=1;j<=n+1;j++)
    {
        printf("a[%d][%d]=", i, j);
        scanf("%f",&a[i][j]);
    }
    for(k=1;k<=n-1;k++)
    {
        piv=fabs(a[k][k]);
                   lin=k;
        for (i=k+1;i<=n;i++)
           if (piv<fabs(a[i][k]))
           {
              piv=fabs(a[i][k]);
                          lin=i;
           }

        if (piv==0)
          {
           printf("sistemul nu are solutie unica");
           exit(1);
           }
          if(lin!=k)
          for (j=k;j<=n+1;j++)
          { aux=a[k][j];
            a[k][j]=a[lin][j];
             a[lin][j]=aux;
          }
        for(i=k+1;i<=n;i++)
        for(j=k+1;j<=n+1;j++)
             a[i][j]=(a[i][j]*a[k][k]-a[i][k]*a[k][j])/a[k][k];
    }
    x[n]=a[n][n+1]/a[n][n];
    for(i=n-1;i>=1;i--)
    {
        S=0;
        for(j=i+1;j<=n;j++)
            S+=a[i][j]*x[j];
        x[i]=(a[i][n+1]-S)/a[i][i];
    }
    for(i=1;i<=n;i++)
    {
        printf("X%d=%f\n",i,x[i]);

    }
}
