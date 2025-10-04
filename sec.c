//Write a program to check whether a given year is a leap year or not using if-else. 
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("Leap year");
    else
    printf("Not leap year");

    return 0;
}