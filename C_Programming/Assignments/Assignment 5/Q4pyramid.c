// pyramid pattern
// Input: n = 5
// Output:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

void main(){
    int n = 5;

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(int col = 1; col <= i; col++)
        {
            printf("* ");
        }

        printf("\n");
    }
}