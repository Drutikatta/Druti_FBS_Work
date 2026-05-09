// Write a program to find greatest of three numbers using nested if-else.

#include <stdio.h>

void main(){
    int no1,no2,no3;

    printf("Enter num 1: \n");
    scanf("%d",&no1);
    printf("Enter num 2: \n");
    scanf("%d",&no2);
    printf("Enter num 3: \n");
    scanf("%d",&no3);

    if(no1>no2){
        if(no1>no3){
            printf("%d is greatest",no1);
        }
        else{
            printf("%d is greatest",no3);
        }
    }
    else if (no2>no3){
        printf("%d is greatest",no2);
    }
    else{
        printf("%d is greatest",no3);
    }
    
}