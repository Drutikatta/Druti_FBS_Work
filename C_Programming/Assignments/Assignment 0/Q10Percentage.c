// Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

#include <stdio.h>

void main(){
    int m1=89,m2=79,m3=74,m4=82,m5=95;

    int total=m1+m2+m3+m4+m5;
    float percent=(total/500.0)*100;

    printf("Total is %d and Percentage is %f",total,percent);
}