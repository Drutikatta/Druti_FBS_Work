// Print strong numbers in the given range 1 to n.

#include <stdio.h>

void main(){
      int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {

        int num=i, original=i;
        int digit, sum=0;

        while(num>0) {

            digit = num % 10;

            int fact=1, j;

            for(j=1; j<=digit; j++)
                fact *= j;

            sum += fact;

            num /= 10;
        }

        if(sum == original)
            printf("%d ", original);
    }

}