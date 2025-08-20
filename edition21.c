#include<stdio.h>
int main(){

  float Gsalary;
  printf("enter the gross salary :");
  scanf("%f",&Gsalary);

  float allowance = .1 * Gsalary;
  float deduction = .03 *  Gsalary;


  float Nsalary = Gsalary + allowance - deduction;
  printf("net salary is = %f",Nsalary);

  return 0;






}
