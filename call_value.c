#include<stdio.h>
void fun(int x,int y){
    x=2;
    y=5;
    printf("\nthe value of x:%d and y:%d",x,y);
}
int main(){
    int x=5;
    int y=2;
    printf("the value of x:%d and y:%d",x,y);
    fun(x,y);
}