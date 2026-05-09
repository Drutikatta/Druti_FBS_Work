// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>

void main(){
    int num1,num2;
    char op;

    printf("Enter num1: \n");
    scanf("%d",&num1);

    printf("Enter num2: \n");
    scanf("%d",&num2);

    printf("Enter the operator: \n");
    scanf(" %c",&op);

    switch(op){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
        case '%':
            printf("%d",num1%num2);
            break;
        default:
            printf("Invalid");
    }
}