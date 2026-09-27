#include<stdio.h>

void main(){
    int age =17;    // conditipno block ? trueblock : falseblock
    _Bool isEligble = (age >=18) ?  "true": "false";

    printf("if age is greater than 18 the you are eligble %d \n",isEligble);
}