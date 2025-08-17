#include<stdio.h>
int main()
{
   float Gsales;
   printf("enter the gross sales :");
   scanf("%f",&Gsales);

   float Nsales = Gsales - (.1 * Gsales);
   printf("Nsales = %f\n",Nsales);


}
