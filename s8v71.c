/*
2D array weather program

Find total rainfall for each year, the average yearly rainfall and the average rainfall for each month

Array should have 5 rows (years) and 12 columns (months)

Rainfall amounts can be floats

Values are hard-coded

Example output:
"
Year    Rainfall (inches)
2010    32.4
2011    37.9
2012    49.8
2013    44.0
2014    32.9

The yearly average is 39.4 inches.

MONTHLY AVERAGES

Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
7.3 7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7
"
*/

#include <stdio.h>

int main(void) {
    // Initialise rainfall data
    float arrRain[5][12] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    // Create array for each years total rainfall
    float yearTotals[5] = {0.0, 0.0, 0.0, 0.0, 0.0};

    // Create variable to hold the average yearly rainfall
    float allAvg = 0.0;

    // Create variable for each month's average over the 5 years
    float monthAvgs[12];

    // Create variables for iteration
    int i, j;

    // Calculate totals for each year
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 12; j++) {
            yearTotals[i] += arrRain[i][j];
        }
    }

    // Add up year totals
    for (i = 0; i < 5; i++) {
        allAvg += yearTotals[i];
    }

    // Calculate yearly average
    allAvg /= 5;

    // Calculate totals and averages for each month
    for (i = 0; i < 12; i++) {
        float tempTotal = 0.0;
        for (j = 0; j < 5; j++) {
            tempTotal += arrRain[j][i];
        }
        monthAvgs[i] = tempTotal / 5;
    }

    // Print headers
    printf("Year\tRainfall (inches)\n");

    // Print year totals
    for (i = 2010, j = 0; i < 2015; i++, j++)
        printf("%d\t%.2f\n", i, yearTotals[j]);

    // Print yearly average
    printf("\nThe yearly average is %.2f inches.\n", allAvg);

    // Print header
    printf("\nMONTHLY AVERAGES\n\n");

    // Print months
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

    // Print monthly averages
    for (i = 0; i < 12; i++)
        printf("%.2f\t", monthAvgs[i]);

    // Print new line for neatness
    printf("\n");

    return 0;
}
