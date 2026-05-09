// Write a program to check whether a given character is uppercase or lowercase.

#include <stdio.h>

void main(){
    char ch;

    printf("Enter a character: \n");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("%c is UpperCase",ch);
    }
    else if(ch>='a'&& ch<='z') {
        printf("%c is lowerCase",ch);
    }
    else{
        printf("%c is special character",ch);
    }
}