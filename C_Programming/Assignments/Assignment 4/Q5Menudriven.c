// Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include <stdio.h>

void main(){
    int n,choice;
    printf("Enter a num: ");
    scanf("%d",&n);

    printf("\n 1 check even or odd");
    printf("\n 2 check prime or not");
    printf("\n 3 check pallindrome or not");
    printf("\n 4 check positive ,negative or zero");
    printf("\n 5 check reverse a num");
    printf("\n 6 find sum of num");

    printf("\n Enter ur choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            if(n%2==0)
                printf("%d is even",n);
            else
                printf("%d is odd",n);
            break;
        case 2:{
            int count=0;
            for(int i =1;i<=n;i++){
                if(n%i==0)
                    count++;
            }
            if(count==2)
                printf("%d is Prime",n);
            else
                printf("%d is not Prime",n);
            break;
        }
        case 3:{
            int rev=0,temp=n,digit;

            while(temp>0){
                digit=temp%10;
                rev=rev*10+digit;
                temp=temp/10;
            }
            if(n==rev)
                printf("%d is Pallindrome",n);
            else
                printf("%d is not a pallindrome",n);
            break;
        }
        case 4:
            if(n>0)
                printf("%d is Positive",n);
            else if(n<0)
                printf("%d is negative",n);
            else
                printf("%d is Zero",n);
            break;
        case 5:{
            int temp=n, rev=0,digit;

            while(temp>0){
                digit=temp%10;
                rev=rev*10+digit;
                temp=temp/10;
            }
            printf("reverse = %d",rev);
            break;
        }
        case 6:{
            int temp=n,digit,sum=0;

            while(temp>0){
                digit=temp%10;
                sum=sum+digit;
                temp=temp/10;
            }
            printf("%d sum of num",sum);
            break;
        }
        default:
            printf("Invalid choice");
    }  
    
}
