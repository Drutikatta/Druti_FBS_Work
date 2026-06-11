// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include <stdio.h>

void main(){
    int n,temp,rem,sum=0;

    printf("Enter the num: ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(temp==sum)
        printf("%d is a Armstrong", temp);
    else
        printf("%d Is not a Armstrong",temp);


}