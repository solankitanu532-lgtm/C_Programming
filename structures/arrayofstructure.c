#include<stdio.h>
#include<string.h>
int main (){
     typedef struct  student{
        char name[15];
        char dept[10];
        int rollno;
        char course;
        int year;
     }student;
     student a[20];
      for (int i=0;i<3;i++){
        scanf("name:%s\n",a[i].name);
        scanf("dept:%s\n",a[i].dept);
        scanf("rollno:%d\n",&a[i].rollno);
        scanf("course:%s\n",a[i].course);
       scanf("year :%d\n",&a[i].year);
     }
     for (int i=0;i<3;i++){
        printf("name:%s\n",a[i].name);
        printf("dept:%s\n",a[i].dept);
        printf("rollno:%d\n",a[i].rollno);
        printf("course:%s\n",a[i].course);
        printf("year:%d\n",a[i].year);
     }
    return 0;
}