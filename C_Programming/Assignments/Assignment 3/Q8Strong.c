// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include <stdio.h>

void main(){
    int n,temp,fact,rem,sum=0;

    printf("Enter the num: ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        rem=n%10;

        fact=1;
        for(int i =1;i<=rem;i++){
            fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(temp==sum)
        printf("%d is a strong num",temp);
    else
        printf("%d is not a strong num",temp);
}