// Write a C program to swap two numbers using a temporary third variable.

#include <stdio.h>

void main(){
    int a=10;
    int b=20,temp;

    temp=a;
    a=b;
    b=temp;

    printf(" After swaping a= %d b= %d",a,b);
}