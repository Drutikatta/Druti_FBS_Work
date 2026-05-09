// Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he 
// has purchased more than 500 than discount is 20% otherwise  discount is 10%.But if he is not a student then if
//  he has purchased more than 600 discount is 15% otherwise there is not discount.

#include <stdio.h>

void main(){
    char stud;
    float price, discount;

    printf("Enter are you a student y or n: \n");
    scanf("%c",&stud);

    printf("Enter the price: \n");
    scanf("%f",&price);

    if(stud=='y'){
        if(price>500){
            discount=price*0.20;
        }
        else{
            discount=price*0.10;
        }
    }
    else{
        if(price>600){
            discount=price*0.15;
        }
        else{
            discount=0;
        }
    }

    printf("Discount is %f ",discount);
    printf("Total amount is %f",price-discount);

}