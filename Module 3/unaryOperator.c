#include<stdio.h>

void main(){
    int a =5; //9
    int result = a +   ++a + --a + a++ - ++a + a++ + ++a + --a + a-- + ++a + a++;
        //         6     +  9  +  
        // 15 + 32 +15
        printf("final a is %d \n",result);
        printf("size of result %d \n" , sizeof(result));
}