#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int total_distance,current_fuel;
   long long int no_gas;
   scanf("%lld %lld %lld",&total_distance,&current_fuel,&no_gas);
   int *x;
   x = (int*)malloc(sizeof(int)* (no_gas+2));
   x[0] = 0;
   x[no_gas+1]=total_distance;
   for(int i=1;i<=no_gas;i++)
   {
       scanf("%d",&x[i]);
   }
   long long int current_position  = 0;
   long long int last_position = 0;
   long int no_refills = 0;

   while(current_position <= no_gas)
   {
       last_position = current_position;
       while(current_position <= no_gas && x[current_position+1] - x[last_position] <= current_fuel)
       {
           current_position++;
       }

       if(current_position == last_position)
       {
          printf("-1");
          return 0;
       }

       if(current_position <= no_gas)
       {
           no_refills++;
       }

   }

   printf("%ld\n",no_refills);

}
