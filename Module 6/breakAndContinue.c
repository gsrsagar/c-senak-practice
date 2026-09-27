#include<stdio.h>

void main(){

    int numberToFind =3;

    int n =50;

    for(int i=1;i<=n;i++){
        if(i==numberToFind){
            printf("we found the person with number %d \n",i);
            break;
        }
    }

    int numberTOPDivode =5;

    for(int i=i;i<=n;i++){
        if(i%5!=0){
            continue;
        }

        printf("found 5 divisor %d \n",i);

    }

  //  printf("ended");
}