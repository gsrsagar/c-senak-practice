#include<stdio.h>

void main(){
    // nested loops
    // 2 dimension structures 

    /**
     *     * * * *
     *     * * * *
     *     * * * *
     * 
     */
    int rows=3;
    int cols=4;
    for(int i=1;i<=rows;i++){
        // 3-> 
        for(int j=1;j<=cols;j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    printf("endeded");
}