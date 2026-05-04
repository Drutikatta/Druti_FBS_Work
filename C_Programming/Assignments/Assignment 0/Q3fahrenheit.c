// Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula:
// F = (C *9/5) + 32

#include <stdio.h>

void main(){
    float c=30,F;

    F=(c * 9/5) + 32;

    printf("Fahrenheit is %f",F);
}