#include<stdio.h>
int main(){

   float bytes;
   printf("enter the bytes:");
   scanf("%f",&bytes);

   float kb = bytes / 1000;
   printf("kb = %f\n",kb);

   float mb = kb / 1000;
   printf("mb = %f\n",mb);

   float gb = mb / 1000;
   printf("gb = %f\n",gb);






   return 0;





}
