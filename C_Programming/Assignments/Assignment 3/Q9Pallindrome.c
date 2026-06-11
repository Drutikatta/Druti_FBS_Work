// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

#include <stdio.h>

void main(){
    int n,temp,rem,rev=0;

    printf("Enter the num: ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
        printf("%d is a Palindrome",temp);
    else
        printf("%d is not a Palindrome",temp);

}