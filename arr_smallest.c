#include<stdio.h>
int main(){
int n=0;
int arr[n];
    printf("enter size");
    scanf("%d",&n);
    // int arr[n];

    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is");
    for(int j =0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}