#include<stdio.h>
int main(){

   float side;
   printf("enter the size the side :");
   scanf("%f",&side);
   float length;
   printf("enter the lengnth :");
   scanf("%f",&length);

   float area = side * length;
   printf("area is = %f\n",area);

   float pera = (2 * side)  + ( 2 * length);
   printf("pera. of rectengle = %f\n",pera);
   return 0;





}
