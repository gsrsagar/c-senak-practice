#include<stdio.h>

void main(){

    int age =0;

    if(age>=11 && age<=19){
        printf("teenage");
    } else if(age>=20 && age<=35){
        printf("it is adult age");
    } else if(age>35 && age<=50){
        printf("parent hood");
    } else if (age>50 && age<=99){
        printf("grandhood");
    } else {
        printf("Kailsam Dead");
    }
}