/*
Write a C program that creates a structure pointer and passes
it to a function

Create a structure named item with the following members:
    - itemName (pointer)
    - quantity (int)
    - price (float)
    - amount (float - stores quantity * price)
    
Create a function named readItem that takes a structure pointer of 
type item as a parameter:
    - This function should read in a product name, price and quantity
    - The contents read in should be stored in the passed in structure 
    to the function
    
Create a function named printItem that takes as a parameter a structure
pointer of type item, which prints the contents of the argument

The main function should declare an item and a pointer to the item:
    - The pointer should be passed into both functions
*/

#include <stdio.h>
#include <stdlib.h>

struct item {
    char * itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item * pUserItem);
void printItem(struct item * pUserItem);

int main(void) {
    struct item userItem;
    struct item * pUserItem = &userItem;
    
    readItem(pUserItem);

    printItem(pUserItem);

    return 0;
}

void readItem(struct item * pUserItem) {
    float calcAmount;
    pUserItem->itemName = (char *)malloc(100 * sizeof(char));

    if (pUserItem->itemName == NULL)
        exit(-1);

    printf("Enter item name: \n");
    scanf("%s", pUserItem->itemName);

    printf("Enter quantity: \n");
    scanf("%d", &pUserItem->quantity);

    printf("Enter price: \n");
    scanf("%f", &pUserItem->price);

    calcAmount = pUserItem->quantity * pUserItem->price;
    pUserItem->amount = calcAmount;
}

void printItem(struct item * pUserItem) {
    printf("Item name: %s\n", pUserItem->itemName);
    free(pUserItem->itemName);
    printf("Item quantity: %d\n", pUserItem->quantity);
    printf("Price: $%.2f\n", pUserItem->price);
    printf("Total amount: $%.2f\n", pUserItem->amount);
}
