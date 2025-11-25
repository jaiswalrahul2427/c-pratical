#include <stdio.h>
int main(){
    int n;
    int arr[n];
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}