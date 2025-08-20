#include<stdio.h>
int main(){

   float money;
   printf("enter the amount :");
   scanf("%f",&money);

   float year;
   printf("enter the time peried :");
   scanf("%f",&year);

   float Irate;
   printf("enter the interest rate :");
   scanf("%f",&Irate);

   float I = (money * year * Irate)/100;
   printf("interest = %f\n",I);

   return 0;





}
