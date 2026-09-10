#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// References:
    // https://www.geeksforgeeks.org/c/basic-input-and-output-in-c/
    // https://www.w3schools.com/c/c_operators_comparison.php
    //

    // Define integer values
    printf("How many motors are carrying the packages?\n");
  
    scanf("%d", &motorCount);
    
    printf("%d\n", motorCount);
  
    printf("How many kg of packages do we expect?\n");
  
    scanf("%d", &totalPackageWeight);
    
   	printf("%d\n", totalPackageWeight);

    // compare totalPackageWeight with total Motor Capacity
    if (totalPackageWeight <= (motorCount * MOTOR_CAPACITY)) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
