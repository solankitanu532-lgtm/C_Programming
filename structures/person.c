#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[30];
        float salary;
        int age;
    }a,b;

    a.age = 22;
    strcpy(a.name,"ram ");
     a.salary = 300.45;

     b.age = 34;
     strcpy(b.name,"shyam");
     b.salary = 450.50;
     printf("%s\n",a.name);
     printf("%d",b.age);
    return 0;
}