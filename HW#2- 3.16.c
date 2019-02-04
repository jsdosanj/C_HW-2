//3.16 Develop a program that will input the miles driven and gallons used for each tankful. 
//The program should calculate and display the miles per gallon obtained for each tankful. 

// Calculate the average miles per gallon

// Initialize variable for total gallons to zero
// Initialize variable for total miles to zero

// While the user has not entered the sentinel
//    Input the gallons used
//    Input the miles driven
//    Calculate the miles per gallon
//
//    If the sentinel is entered
//      Divide the overall average by the quantity of entries
//      Print the overall average miles per gallon

#include <stdio.h>
#include <stdbool.h>

int main() {
  int counter;
  float gallons, miles, tankAverage, overallAverage, total;
  counter = 0;
  total = 0;

  while(true) {
    printf( "Enter the gallons used, (-1 to end): \n" );
    scanf( "%f", &gallons );

    if ( gallons == -1 ) {
      overallAverage = total / counter;
      printf( "The overall average miles/gallon was %f\n", overallAverage );

      return 0;
    }

    printf( "Enter the miles driven: \n" );
    scanf( "%f", &miles );

    tankAverage = miles / gallons;
    printf( "The miles per gallon for this tank was %f\n", tankAverage );

    total += tankAverage;
    counter += 1;
  }

  return 0;
}