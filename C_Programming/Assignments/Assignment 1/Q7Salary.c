// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
// respectively.

#include <stdio.h>

void main(){
    float total,da,ta,hra,sal;

    printf("Enter the Salary: \n");
    scanf("%f",&sal);

    if(sal<=5000){
        da=sal*0.10;
        ta=sal*0.20;
        hra=sal*0.25;
    }
    else{
        da=sal*0.15;
        ta=sal*0.25;
        hra=sal*0.30;
    }
    total=sal+da+hra+ta;

    printf("Total salary is: %f",total);
}