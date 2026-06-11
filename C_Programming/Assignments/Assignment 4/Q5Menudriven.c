// Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include <stdio.h>

void main(){
    int n,choice;
    printf("Enter a num: ");
    scanf("%d",&n);

    printf("\n 1 check even or odd");
    printf("\n 2 check prime or not");
    printf("\n 3 check pallindrome or not");
    printf("\n 4 check positive ,negative or zero");
    printf("\n 5 check reverse a num");
    printf("\n 6 find sum of num");

    printf("Enter ur choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            if(n%2==0)
                printf("%d is even",n);
            else
                printf("%d is odd",n);
        
        case 2:
             
    }  
}
