// Check the given number is prime or not.
// Input: n = 7
// Output: Prime

#include <stdio.h>

void main(){
    int n ,i,count=0;
    printf("Enter the num: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2)
        printf("%d is prime num",n);
    else
        printf("%d is not a prime",n);
}