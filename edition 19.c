#include<stdio.h>
int main(){

   float base;
   printf("enter the base :");
   scanf("%f",&base);

   float height;
   printf("enter the height :");
   scanf("%f",&height);


   float area = (height*base)* (.5);
   printf("area = %f\n",area);


}
