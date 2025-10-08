#include<stdio.h>
int main()
{
    int a=1;
    printf("table of 2:");
    while(a<11)
    {
        printf("\n%dX%d %d",2,a,2*a);
        a=a+1;
    }
    return 0;
}