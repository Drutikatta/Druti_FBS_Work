// Write a C program to convert given minutes into hours and remaining minutes.

#include <stdio.h>

void main(){
    int min=130;
    int hours,rem;

    hours=min/60;
    rem=min%60;

    printf("Hours is %d remaining minutes %d",hours,rem);
}