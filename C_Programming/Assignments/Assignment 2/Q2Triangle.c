// Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include <stdio.h>

void main(){
    int s1,s2,s3;
    printf("enter side 1 of a triangle: \n");
    scanf("%d",&s1);
    printf("enter side 2 of a triangle: \n");
    scanf("%d",&s2);
    printf("enter side 3 of a triangle: \n");
    scanf("%d",&s3);

    if(s1==s2&&s2==s3){
        printf("triangle is Equilateral");
    }
    else if(s1==s2||s2==s3||s1==s3){
        printf("triangle is isosceles");
    }
    else{
        printf("triangle is Scalene");
    }
}