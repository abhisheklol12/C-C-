//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main(){
    char chr;
    printf("Enter any Alphabet: ");
    scanf("%c",&chr);

    switch(chr)
    {
       case 'a': 
            printf("this is vowel");
            break;

        case 'e': 
            printf("this is vowel");
            break;

        case 'i': 
            printf("this is vowel");
            break;

        case 'o': 
            printf("this is vowel");
            break;

        case 'u': 
            printf("this is vowel");
            break;
       
       default: 
            printf("this is consonant");
            break;
    }
    return 0;
}