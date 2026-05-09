// Accept the age and check if the person is:
// Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include <stdio.h>

void main(){
    int age;

    printf("Enter the person age: \n");
    scanf("%d",&age);

    if(age>=60){
        printf("Senior");
    }
    else if(age<=59 && age>=20){
        printf("Adult");
    }
    else if(age<=19 && age>=12){
        printf("Teenager");
    }
    else{
        printf("child");
    }
}