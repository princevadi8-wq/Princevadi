#include<stdio.h>
int main()
{
   float sub1,sub2,sub3;
   printf("enter the marks of subject 1 :");
   scanf("%f",&sub1);

   printf("enter the marks of subject 2 :");
   scanf("%f",&sub2);

   printf("enter the marks of subject 3:");
   scanf("%f",&sub3);

   float AVGsub = (sub1 + sub2 + sub3 )/3;
   printf("AVGsub = %f\n",AVGsub);

   return 0;

}
