#include<stdio.h>

int main(){
    char name[10] = "Sagar"; // variable declaration and initialization
    
    printf("my name is %s",name); // is character format specifier \0

   // 0 0 0 0  0 0 0 0
   // 128 64 32 16 8 4 2 1 -> 255
    // -128 to 0  +127 -> 255 spaces to occupy
   //  2^0- 2^7 -> 8 places -> 8 bits -> 1 byte 
  //  1 byte -> 8 bits = 255 -  char size
 // 2 bytes
 // float 4 bytes // 3.45
 // long 8 bytes // 
 // double 8 bytes  // 
}
