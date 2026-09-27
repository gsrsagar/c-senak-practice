#include<stdio.h>

void main(){
    // for loop is known -. how many time I want to do
    // i =1 , i=2 , i=3, i=4. i=5. i=6
    int n;
    printf("enter n value and press enter in keyboard");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // 1,2,3,4,5
      printf("course %d \n",i);
    }

}