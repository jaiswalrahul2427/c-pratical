//Write a program to display the day of the week (1–7).

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
     printf("Monday");
     break;
    case 2:
     printf("Tues");
     break;
    case 3:
     printf("we");
     break;
    case 4:
     printf("Th");
     break;
    case 5:
     printf("fri");
     break;
    case 6:
     printf("sat");
     break;
    case 7:
     printf("sun");
     break;
    default:
       printf("Invaild");
        break;
    }
    return 0;
}