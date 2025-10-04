//Write a program to create a simple calculator (+, –, *, /) using switch. 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("1.sum\n");
    printf("2.Sub\n");
    printf("3.div\n");
    printf("4.mul\n");
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    printf("Enter the operation number:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("\nSum:%d",a+b);
        break;
    case 2:
        printf("\nSub:%d",a-b);
        break;
    case 3:
        printf("\ndiv:%d",a/b);
        break;
    case 4:
        printf("\nMul:%d",a*b);
        break;
    
    default:
        printf("Invaild");
        break;
    }
    return 0;




}