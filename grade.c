// Write a program to assign grades to a student based on percentage: 
//  90–100: Grade A 
//  75–89: Grade B 
//  50–74: Grade C 
//  Below 50: Fail


#include<stdio.h>
int main()
{
    int num;
    printf("Enter the student number:");
    scanf("%d",&num);
    if(100>=num && num>=90)
     printf("Grade A");
    else if(89>= num && num>=75)
     printf("Grade B");
    else if(74>= num && num>=50)
     printf("Grade C");
    else 
     printf("Fail");

return 0;
}