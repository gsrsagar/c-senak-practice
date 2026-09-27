#include<stdio.h>
#include<limits.h>
#include<float.h>




int main(){
    _Bool iisComplted = "false";
    unsigned int age =4294967295; // [ 0 to 4294967295]
  

    char name[100] ="This is Sagar Reddy Guvvala";
   
    printf("Size of the unsigned char [%zu] from to range [%d to %d] \n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Size of the unsigned char [%zu] from to range [0 to %d] \n", sizeof(unsigned char), UCHAR_MAX);

     printf("Size of the short  [%zu] from to range [%d to %d] \n", sizeof(short), SHRT_MIN, SHRT_MAX);

    printf("Size of the int  [%zu] from to range [%d to %d] \n", sizeof(int), INT_MIN, INT_MAX);
    printf("Size of the int  [%zu] from to range [0 to %u] \n", sizeof(unsigned int), UINT_MAX);
    printf("My unsigned age is %u \n",age);
    printf("my course is %d",iisComplted);
    printf("my name is %s",name);
}