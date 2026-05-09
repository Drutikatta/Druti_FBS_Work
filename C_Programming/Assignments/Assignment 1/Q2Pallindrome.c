// Write a program to check given 3 digit number is pallindrome or not.

#include <stdio.h>

void main(){
    int num;
    int rem,rev=0;

    printf("Enter a num : \n");
    scanf(" %d",&num);

    int org=num;

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org==rev){
        printf("%d is pallindrome",org);
    }
    else{
        printf("%d is not pallindrome",org);
    }
}