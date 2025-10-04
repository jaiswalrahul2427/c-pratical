#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the op:");
    scanf("%c",&op);
    printf("Enter the num:");
    scanf("%d %d",&a,&b);
    printf("+,-,/");
    printf("Enter the op:");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
            printf("%d",a+b);
        break;
    
    default:
    printf("Inva");
    break;
    }
    return 0;
}