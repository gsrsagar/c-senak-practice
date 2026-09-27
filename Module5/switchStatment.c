#include<stdio.h>

void main(){

    int day = 1;

    switch(day)
    {
        case 1 : printf("it is monday \n"); break;
        case 2 : printf("it is turesday \n"); break;
        case 3 : printf("it is wednesday \n"); break;
        case 4 : printf("it is thursday \n"); break;
        case 5: printf("it is friday \n");  break;
        case 6: printf("it is satruday \n");  break;

        default : printf("invalid input");
    }

    printf("exited switch");
}