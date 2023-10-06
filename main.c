/******************************************************************************
# Author:           Liam Campbell
# Lab:              Assignment #2
# Date:             October 5th, 2023
# Description:      This program asks the user for their current radon level and uses the half life of radon to return their radon levels in 4, 8, and 16 days.
# Input:            double number
# Output:           double number, double number, double number
# Sources:          None
#******************************************************************************/
#include <stdio.h>


int main(void) {
  double currentRadon;
  double radonAfterFour, radonAfterEight, radonAfterSixteen;
  
  printf("Welcome to my Radon Level Calculator!\n");
  printf("Enter the current amount of Radon detected: \n");

  scanf("%lf", &currentRadon);

  radonAfterFour = currentRadon / 2.0;
  radonAfterEight = radonAfterFour / 2.0;
  radonAfterSixteen = radonAfterEight / 4.0;

  printf("Your Radon level: \n");
  printf("After 4 days: %0.4lf pCi/L\n", radonAfterFour);
  printf("After 8 days: %0.4lf pCi/L\n", radonAfterEight);
  printf("After 16 days: %0.4lf pCi/L\n", radonAfterSixteen);

  
  printf("Thank you for using my program!\n");
  
  
  return 0;
}