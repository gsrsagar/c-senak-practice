#include<stdio.h>


int age =20;

int main(){
    int marks =25; // local variable declaration and initialization
    static int age_ =30; //static variable
    calculate(10,age_); // function call
    printf("My age is %d \n",age); // is integer format specifier
    printf("My marks are %d \n",marks); // is integer format specifier
    printf("My static age_ is %d",age_); // is integer format specifier
}


int calculate(int a, int b){
    int result =0;
    printf("marks are %d \n",age); // is integer format specifier
    int sum = a+b; // local variable declaration and initialization
    return sum;
}