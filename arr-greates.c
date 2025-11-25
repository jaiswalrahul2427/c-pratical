#include<stdio.h>
int main()
{
    int arr[5],max;
    printf("Enter the number:");
    for(int i=0;i<5;i++){
      scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(int j=0;j<5;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("The largest no:%d",max);
    return 0;
}