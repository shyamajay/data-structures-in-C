#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *a,*b;
  int n;
  scanf("%d",&n);

  a=(int*)malloc(sizeof(int)*n);
  b=(int*)malloc(sizeof(int)*n);

  for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

  for(int i=0;i<n;i++)
        scanf("%d",&b[i]);

  long long int temp;
  for(int i=0;i<n;i++)
  {
      temp = 0;
      for(int j=i+1;j<n;j++)
      {

        if(a[i]<a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
  }
  for(int i=0;i<n;i++)
  {
      temp = 0;
      for(int j=i+1;j<n;j++)
      {

        if(b[i]<b[j])
        {
          temp=b[i];
          b[i]=b[j];
          b[j]=temp;
        }
      }
  }

 long long int sum = 0;

 for(int i=0;i<n;i++)
 {
     sum += (long long)a[i]*b[i];
 }
  printf("%lld\n",sum);
}
