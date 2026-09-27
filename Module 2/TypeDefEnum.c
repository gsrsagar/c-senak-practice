#include<stdio.h>


// Phonpe -> type -> success , failed , blocked
typedef enum { PAYMENTSUCCESS = 1, PAYMENTFAILED =2,PAYMENTBLOCKED = 3} PHONEPESTATUS;

typedef enum {SUN =1, MON=2, TUE=3,WED=4, THURS=5, FRI=6, SAT=7,} WEEKSS;


int main(){
    PHONEPESTATUS pAY = PAYMENTSUCCESS;

    printf("My payment is %d",pAY);
}