//Write a program to check whether a number is even or odd using switch.

#include<stdio.h>
int main()
{
    int num1,remain;
    printf("ENter the num:");
    scanf("%d",&num1);
    remain=num1%2;
    switch (remain)
    {
    case 0:
        printf("Even");
        break;
    case 1:
      printf("Odd");
      break;
    default:
    printf("Invaild");
        break;
    }
    return 0;

}