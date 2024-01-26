/*

From C Programming For Beginners - Master the C Language by Tim Buchalka's Learn Programming Academy

Section 7, Video 58 Challenge:

Calculate weekly pay.

The program should ask the user to enter the number of hours worked in a week.

The program should display as output the gross pay, the taxes and the net pay.

Assumptions:
    - Basic pay rate = $12.00/hr
    - Overtime (in excess of 40 hours) = time and a half
    - Tax rates:
        - 15% on the first $300
        - 20% on the next $150
        - 25% on the rest

*/

#include <stdio.h>
#include <stdlib.h>

#define BASEPAYRATE 12.00
#define OVERTIMEPAYRATE 1.5
#define TAX300 0.15
#define TAX150 0.2
#define TAXREST 0.25

int main(void) {
    int totalHours, overtimeHours;
    float basePay, overtimePay, grossPay, tax1, tax2, tax3, taxTotal, netPay;

    scanf("%d", &totalHours);

    if (totalHours > 40) {
        overtimeHours = totalHours - 40;
        basePay = 40 * BASEPAYRATE;
        overtimePay = overtimeHours * (BASEPAYRATE * OVERTIMEPAYRATE);
    }

    else {
        basePay = totalHours * BASEPAYRATE;
    }

    grossPay = basePay + overtimePay;

    if (grossPay > 450) {
        tax1 = 300 * TAX300;
        tax2 = 150 * TAX150;
        tax3 = (grossPay - 450) * TAXREST;
        taxTotal = tax1 + tax2 + tax3;
        netPay = grossPay - taxTotal;
    }

    else if (grossPay > 300 && grossPay <= 450) {
        tax1 = 300 * TAX300;
        tax2 = (grossPay - 300) * TAX150;
        taxTotal = tax1 + tax2;
        netPay = grossPay - taxTotal;
    }

    else {
        tax1 = grossPay * TAX300;
        taxTotal = tax1;
        netPay = grossPay - taxTotal;
    }

    printf("%.2f\n", grossPay);
    printf("%.2f\n", taxTotal);
    printf("%.2f\n", netPay);

    return 0;
}
