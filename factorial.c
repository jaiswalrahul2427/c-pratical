#include<stdio.h>
int main()
{
    int num,factorial=1;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("factorial:\n");
    for(int i=num;i>0;i--){
        factorial=factorial*i;
        printf("%d\n",i);
    }
    printf("The factorial of %d is :%d",num,factorial);
    return 0;

}