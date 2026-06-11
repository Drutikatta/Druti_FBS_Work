// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15

#include <stdio.h>

void main(){
    int start,end,sum=0;

    printf("Enter the start num: ");
    scanf("%d",&start);

    printf("Enter the end num: ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        sum=sum+i;
    }
    printf("%d ",sum);

}