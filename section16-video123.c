/*
NOTE: Task does not match example solution
Write a program that declares a structure and prints out its content
    - Create an employee structure with 3 members
        - name (char array)
        - hireDate (int)
        - salary (float)
    - Declare and initialise an instance of an employee type
    - Read in a second employee from the console and store it in a structure of type employee
    - Print out the contents of each employee
*/

#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[50];
    char hireDate[10];
    float salary;
};

// Function to get and store information in the struct
void structFiller(struct employee *emp);
// Function to print information stored in the struct
void structPrinter(struct employee *emp);

int main(void) {
    // Initialised with examples
    struct employee * pEmp, emp = {"employee1", "4/20/2020", 34000.00};
    // Assign pointer
    pEmp = &emp;

    structFiller(pEmp);
    structPrinter(pEmp);

    return 0;
}

void structFiller(struct employee *emp) {
    printf("Enter employee name: ");
    scanf("%s", &emp->name);
    printf("Enter hire date (dd/mm/yyyy): ");
    scanf("%s", &emp->hireDate);
    printf("Enter salary: ");
    scanf("%f", &emp->salary);
}

void structPrinter(struct employee *emp) {
    printf("Employee name: %s\nHire date: %s\nSalary: $%.2f\n", emp->name, emp->hireDate, emp->salary);
}
