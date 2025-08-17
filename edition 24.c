#include<stdio.h>
int main()
{
   float a,b,c;
   printf("enter the a :");
   scanf("%f",&a);

   printf("enter the b :");
   scanf("%f",&b);

    c = a;
    a = b;
    b = c;
    printf("%f %f",a,b);
    return 0;

}
