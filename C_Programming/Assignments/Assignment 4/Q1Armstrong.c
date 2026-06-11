// Print armstrong numbers in the given range 1 to n.

#include <stdio.h>

void main(){

    int n;

    printf("Enter the num: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int num=i,original=i;
        int digit,sum=0;

        while(num>0){
            digit=num%10;
            sum=sum+(digit*digit*digit);
            num=num/10;
        }

        if(sum==original)
            printf("%d \n",original);
    }

    // return 0;
}