// Write a program to check whether a person is eligible to vote (age ≥ 18).

#include <stdio.h>

void main(){
    int age;

    printf("Enter ur age: \n");
    scanf("%d",&age);

    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible");
    }
}