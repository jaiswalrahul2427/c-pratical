//  Write a program to display a menu:
//  Area of Circle
//  Area of Rectangle
//  Area of Square
// Take user choice using switch and calculate area.

#include <stdio.h>
int main()
{
    int len, width, side, opreation;
    printf("1.Area of Circle\n");
    printf("2.Area of Rectangle\n");
    printf("3.Area of Square\n ");

    printf("Enter the operation number:");
    scanf("%d", &opreation);
    switch (opreation)
    {
    case 1:
        printf("Enter the side value:");
        scanf("%d", &side);
        printf("Area of Square: %d", side * side);
        break;
    case 2:
        printf("Enter the length value");
        scanf("%d", &len);
        printf("Area of Rectangle: %d", len * len);
        break;
    case 3:
        printf("Enter the side value:");
        scanf("%d", &side);
        printf("Area of Square: %d", side * side);
        break;

    default:
        printf("Invaild");
        break;
    }
}