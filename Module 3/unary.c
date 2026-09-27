#include<stdio.h>

void main(){
    int a =5;
    ++a; // 6
    a++; // 7
    int b = a++; //  b =7 ,  a =8
    int c = a++; // c =8 , a=9
    int d = ++a; // d =10, a=10


    printf("a is : %d, b is %d , c is %d, d is %d \n", a,b,c,d);

    


}