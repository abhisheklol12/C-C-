//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    int c=a%5;
    int d=a%11;

    if(c==0){
        printf("Number is divisible by 5");
    }
    else if(d==0){
        printf("Number is divisible by 11");
    }
    else{
        printf("Number is not divisible by 5 or 11");
    }
    return 0;
}