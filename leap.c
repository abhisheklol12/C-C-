//Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main(){
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);

    int c=a%4;

    if(c==0){
        printf("%d is Leap Year",a);
    }
    else{
        printf("%d is not Leap year",a);
    }
    return 0;
}