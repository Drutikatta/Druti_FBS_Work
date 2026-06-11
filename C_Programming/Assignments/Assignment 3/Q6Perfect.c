// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect

#include <stdio.h>

void main(){
    int n,sum=0;

    printf("Enter the num: ");
    scanf("%d",&n);

    for(int i =1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }

    if(sum==n)
        printf("%d is a perfect num",n);
    else
        printf("%d is not a perfect num",n);
}