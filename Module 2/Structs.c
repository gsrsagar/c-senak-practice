#include<stdio.h>


typedef struct
{
   int age;
   char name[20];
   char address[20];
   float marks
} Student;


int main(){
    // student -> name ,age ,rollno, address , oke dantlo
    // 

    int age =20;
    char name[20] ="Sagar";

    Student s ={ 20,"Sagar","Nellore",10.2};
    printf("my name is %s \n",s.name);
     printf("my age is %d \n",s.age);
      printf("my address is %s \n",s.name);
       printf("my marks are %.2f \n",s.marks);

       printf("size of %d",sizeof(s.name));
       printf("size of %d",sizeof(s.age));

}