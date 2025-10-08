#include<stdio.h>
int main()
{
    int product=0,num,last_num;
    printf("Enter the table num");
    scanf("%d",&num);
    printf("from where:");
    scanf("%d",&last_num);
    printf("Table of %d",num);
    for(int i=1;i<=last_num;i++)
    {
        product=num*i;
        printf("\n%dX%d=%d",num,i,product);
    }
    return 0;
}