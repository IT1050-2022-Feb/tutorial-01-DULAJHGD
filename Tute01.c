/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

float mark1,mark2,avg;
int main() {

  printf("Enter marks 1 : ");
  scanf("%f",&mark1);
  printf("Enter marks 2 : ");
  scanf("%f",&mark2);

  avg= (mark1+mark2)/2.0;

  printf("Average marks is : %.2f",avg);
  
  return 0;
}

