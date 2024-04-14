/*
Write a program that displays a string in reverse order:
    - Should read input from the keyboard
    - Need to use strlen
    
Write a program that sorts the strings of an array using a bubble sort
    - Need to use strcmp and strcpy
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revStr();
void bubbleSort();

int main(void) {
    revStr();
    bubbleSort();

    return 0;
}

void revStr() {
    int i;
    char temp[100], str[100];

    printf("Enter string: \n");
    scanf("%s", str);
    
    for (i = strlen(str); i >= 0; i--)
        printf("%c\n", str[i]);
}

void bubbleSort() {
    int i, words;
    char bubbleArr[25][50];

    printf("Enter number of words: \n");
    scanf("%d", &words);

    for (i = 0; i < words; i++) {
        char word[50];

        printf("Enter word: \n");
        scanf("%s", word);
        strncpy(bubbleArr[i], word, 50);

    }

    for (i = 0; i < words -1; i++) {
        char temp[50];

        /*
        strcmp:
        0 if strings are equal
		>0 if the first non-matching character in str1 is greater (in ASCII) than that of str2.
		<0 if the first non-matching character in str1 is lower (in ASCII) than that of str2.
        */

        if (strcmp(bubbleArr[i], bubbleArr[i + 1]) > 0) {
            strncpy(temp, bubbleArr[i], 50);
            strncpy(bubbleArr[i], bubbleArr[i + 1], 50);
            strncpy(bubbleArr[i + 1], temp, 50);
        }
    }

    for (i = 0; i < words; i++)
        printf("%s\n", bubbleArr[i]);

}
