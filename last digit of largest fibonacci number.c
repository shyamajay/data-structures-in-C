#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

long long int fib(long long int n)
{
    int *a;
    a=(int*)malloc(sizeof(int)*n+1);
    long long int d;
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=(a[i-1]+a[i-2])%10;
    }
    d = a[n];
    return d;
}


int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int res = fib(n);
    printf("%lld\n",res);

}


