#include<stdio.h>

void main(){

    int age =15;
    int totalMarks = 100;
    int achievedMarks =70;
    int a = 5;
    int b =6;
    int added = a+b;

    int e = 10;
    int f =5;
    int result = e/f; // quotient
    // divisible by or not
    int x =12;
    int y = 3;
    int divisible = x%y; // this will get use reamindee
    int remainingMarks = totalMarks - achievedMarks;
    printf("lost marks %d \n",remainingMarks);
    printf("Added numbers %d \n",added);
    printf("if the divisible by is %d then %d is divisble by %d \n",divisible,x,y);
    printf("quotient is %d",result);
}