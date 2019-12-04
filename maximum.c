#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter the 1st number as a:");
    scanf("%d",&a);

    printf("Enter the 2nd number as b:");
    scanf("%d",&b);
    
    printf("Enter the 3rd number as c:");
    scanf("%d",&c);

    if(a>b){
        printf("a is maximum: %d",a);
    }
    else if(b>c){
        printf("b is maximum: %d",b);
    }
    else{
        printf("c is maximum: %d",c);
    }

    return 0;
}