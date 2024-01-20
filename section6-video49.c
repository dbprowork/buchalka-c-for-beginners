/*

From C Programming For Beginners - Master the C Language by Tim Buchalka's Learn Programming Academy

Section 6, Video 49 Challenge:

Convert minutes to years and days

Use doubles to store values

Variables needed:
- minutes
- minutes in year (60 * 24 * 365 = 525,600)
- years
- days

Note:
Compiler requires -lm at the end of the command to work with math.h

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // Initialise variables
    double minutes;
    double miny = (60 * 24 * 365);
    double years_total;
    double days_total;
    double full_years;
    double leftover;

    // Get user input
    printf("Enter number of minutes: ");
    scanf("%lf", &minutes);

    // Calculate number of years
    years_total = minutes / miny;
    // Calculate number of days
    days_total = years_total * 365;

    // Output
    printf("%.0lf Minutes is %.2lf Years\n", minutes, years_total);
    printf("%.0lf Minutes is %.2lf Days\nOR:\n", minutes, days_total);

    // Calculate years to a whole number, with the remainder as days
    full_years = floor(years_total);
    leftover = 365 * (years_total - full_years);
    // Output
    printf("%.0lf Year(s) and %.0lf Day(s)\n", full_years, leftover);

    return 0;
}
