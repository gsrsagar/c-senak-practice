#include<stdio.h>


void main(){
    char name[65]; // "this is string means combination of characters"
    // 50th \0

    printf("enter the full name : \n");
    fgets(name,64, stdin);

    printf("you entered input \n");
    puts(name);
}