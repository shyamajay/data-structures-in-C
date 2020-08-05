#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n;
   int a[200],b[200];
   scanf("%lld",&n);
   //a = (int *)malloc(sizeof(int)*n+2);
   //b = (int *)malloc(sizeof(int)*n+2);

   for(int i=0;i<n;i++)
   {
       scanf("%d %d",&a[i],&b[i]);
   }


   int c[200];
   int j=0,temp=0,temp1=0;

   for(int i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
         if(b[j]<b[i])
         {
             temp=b[i];
             b[i]=b[j];
             b[j]=temp;
             temp1=a[i];
             a[i]=a[j];
             a[j]=temp1;
         }
       }
   }

   int max=b[0];


   j=0;
   for(int i=0;i<n;i++)
   {
       if(a[i] > max || b[i] < max)
       {
           c[j]=max;
           j++;
           max=b[i];
           c[j]=max;
       }


   }

   int k = j;
   printf("%d\n",k+1);

   if(k==0)
   {
     printf("%d\n",max);
   }

   else
   {
      for(j=0;j<=k;j++)
      {
        printf("%d ",c[j]);
      }
   }
}

