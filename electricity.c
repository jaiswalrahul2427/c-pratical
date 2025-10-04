// Write a program to input electricity units and calculate bill: 
//  For first 100 units → ₹1 per unit 
//  Next 100 units → ₹2 per unit 
//  Above 200 units → ₹5 per unit

#include <stdio.h>
int main()
{
    int unit, bill;
    printf("Enter the electricity Unit: ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 100)
    {
        bill = unit * 1;
    }
    else if (unit > 100 && unit <= 200)
    {
        bill = (100 * 1) + (unit - 100) * 2;
    }
    else if (unit > 200)
    {
        bill = (100 * 1) + (100 * 2) + (unit - 200) * 5;
    }

    printf("Your Bill: %d\n", bill);
    return 0;
}
