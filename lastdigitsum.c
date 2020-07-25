#include<stdio.h>

long long int get_period(long long int m)
{
    int i = 0;
    int a = 0,b = 1,c = a+b;
    for(i = 0;i < m*m;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
        if(a==0 && b==1)
            return i+1;
    }
}

long long int fib(long long int n,long long int m)
{
    long long int r = n%get_period(m);
    int j = 0;
    int a = 0,b =1,c = r;
    for(j = 1;j < r;j++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
    }
    return c%m;
}

int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int res = fib(n,m);
    printf("%lld\n",res);
}
