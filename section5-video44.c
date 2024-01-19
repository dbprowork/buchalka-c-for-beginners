/*

From C Programming For Beginners - Master the C Language by Tim Buchalka's Learn Programming Academy

Section 5, Video 44 Challenge:

Display the perimeter and area of a rectangle

Perimeter = 2(l + w)
Area = l * w

*/

// For printf function
#include <stdio.h>

int main(void) {
    // Declare variables
    double h, w;
    // Prompt for input and assign to previously declared variables
    printf("Enter height: ");
    scanf(" %lf", &h);
    printf("Enter width: ");
    scanf(" %lf", &w);

    // Perform calculations
    double perimeter = 2 * (h + w);
    double area = h * w;

    // Output variable values
    printf("\nThe height of the rectangle is: %.2lf\n", h);
    printf("The width of the rectangle is: %.2lf\n", w);
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);
    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}
