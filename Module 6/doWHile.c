#include<stdio.h>

void main(){
     int perc =100;

   do{
        printf("user 1%% from the battery remining perc : %d \n",perc);
        perc--;
    } while(perc>0);

    printf("end of the while loop");

}