#include<stdio.h>

void main(){
    int a =5;
    int b =6;

    // 1 byte = 8 bits - [ 0  0  0   0  0  0  0  0    ]
    //                    128 64 32 16  8  4  2  1
    //                     0  0   0  0  0  1  0  1 = 5 //  0 1 0  =2
    //                     0  0   0  0  0  1  1  0 =6
    // 2^0 = 1 , 2^1 =2 , 2^2 = 4 .... 2^7 = 128
    // 2^0 - 2^7
    // 101 = 5
    // 110 =6
   // 1 1 1 = 7
    int andResult = a & b; //4
    int orResult = a | b;
    // <<
    int rightShift1 = a>>1;

    printf("adResult is %d \n",andResult);
    printf("orResult is %d \n",orResult);
  //  printf("leftShift 1 times fro a  is %d \n",leftShift1Times);
    printf("rightShift1 1 times fro a  is %d \n",rightShift1);
} 