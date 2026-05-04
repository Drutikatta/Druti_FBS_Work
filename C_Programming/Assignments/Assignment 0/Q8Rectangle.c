// Write a C program to input the length and width of a rectangle and find its perimeter.

#include <stdio.h>

void main(){
    int len=20;
    int wid=15;
    
    int perimeter=2*(len + wid);
    printf("Perimeter of a rectangle is %d",perimeter);

}