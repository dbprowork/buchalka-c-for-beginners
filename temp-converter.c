/*

Suggested side project from Section 6 Video 49

Convert from celcius to farenheit and vice versa

*/

#include <stdio.h>
#include <stdlib.h>

// Function to convert celcius to farenheit
float c_to_f(int c) {
    float f = (c * 1.8) + 32;
    return f;
}

// Function to convert farenheit to celcius
float f_to_c(int f) {
    float c = (f - 32) / 1.8;
    return c;
}

int main(void) {
    char choice;
    int number;

    printf("Enter (c)elcius or (f)arenheit: ");
    // Get choice for initial unit
    scanf("%c", &choice);
    // Check if input is valid
    if (choice != 'c' || choice != 'f') {
        printf("Invalid input. Try again.\n");
        exit(0);
    }

    printf("Enter temperature: ");
    // Get temperature
    scanf("%d", &number);

    // If celcius is selected, call function to convert
    if (choice == 'c') {
        float result = c_to_f(number);
        printf("%d°C is %.2f°F\n", number, result);
    }
    
    // If farenheit is selected, call function to convert
    else if (choice == 'f') {
        float result = f_to_c(number);
        printf("%d°F is %.2f°C\n", number, result);
    }

    return 0;
}
