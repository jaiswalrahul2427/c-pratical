#include<stdio.h>
int main()
{
    int ar[]={1,5,8,9};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=ar[i]+sum;

    }
    printf("The sum of total number in array:%d",sum);
    return 0;
}