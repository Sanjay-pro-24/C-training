#include <stdio.h>
int main() {
   int num_days,no_units,t_units=0;
   scanf("%d",&num_days);
   for (int i=1;i<=num_days;i++){
       scanf("%d",&no_units);
       t_units+=no_units;
   }
   printf("Total units : %d",t_units);

    return 0;
}