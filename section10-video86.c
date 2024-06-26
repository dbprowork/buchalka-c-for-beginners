/*
Write a function to count the number of characters in a string (length)
    - Cannot use strlen
    - Function should take a char array as a param
    - Function should return an int
    
Write a function to concatenate two character strings
    - Cannot use strcat
    - Should take three params
        - char result[] (where the string will be stored)
        - const char str1[] (first string)
        - const char str2[] (second string)
    - Return void
    
Write a function to test if two strings are equal
    - Cannot use strcmp
    - Should take two const char arrays as params
    - Return Boolean
    - Use null terminator
    - Hint: compare second array to the first
*/

#include <stdio.h>
#include <stdbool.h>

int countArr(const char array[]);
void concatStr(char result[50], const char str1[], const char str2[]);
bool equalStr(const char str1[], const char str2[]);

const char str1[] = "alphadelta";
const char str2[] = "bravocharlie";
char result[50];
bool equal = false;

int main(void) {
    printf("Length of string one: %d\n", countArr(str1));
    printf("Length of string two: %d\n", countArr(str2));

    concatStr(result, str1, str2);
    printf("Concatenated string: %s\n", result);

    equal = equalStr(str1, str2);
    printf("Strings are equal: %s", equal ? "true\n" : "false\n");

    return 0;
}

int countArr(const char array[]) {
    int i = 0, tally = 0;

    while (array[i] != '\0') {
        tally++;
        i++;
    }

    return tally;
}

void concatStr(char result[50], const char str1[], const char str2[]) {
    int i, j = 0;

    for (i = 0; str1[i] != '\0'; i++) {
        result[j] = str1[i];
        j++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        result[j] = str2[i];
        j++;
    }
}

bool equalStr(const char str1[], const char str2[]) {
    int i;

    if (countArr(str1) > countArr(str2) || countArr(str2) > countArr(str1))
        return false;
    else {
        for (i = 0; i <= countArr(str1); i++) {
            if (str1[i] != str2[i])
                return false;
        }
    }

    // If a false is not found in the above loop, this part of the function will run and return true
    return true;
}
