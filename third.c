//Write a program to check whether a given character is a vowel or consonant using if else. s
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the char:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     printf("Vowel");
    else
     printf("Consonant");
    return 0;
}