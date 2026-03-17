#include<stdio.h>
#include<string.h>
int main (){
     typedef struct  record{
        char name[15];
        int age;
        int TM;
        float avgruns;
     }record;
     record a[20];
     
     strcpy(a[0].name,"rahul");
     a[0].age = 24;
     a[0].avgruns = 50.6;
     a[0].TM = 5;

     strcpy(a[1].name,"kunal");
     a[1].age = 22;
     a[1].avgruns = 35.8;
     a[1].TM = 5;

     strcpy(a[2].name,"vishal");
     a[2].age = 23;
     a[2].avgruns = 45.7;
     a[2].TM = 5;
     for (int i=0;i<3;i++){
        printf("name:%s\n",a[i].name);
        printf("age:%d\n",a[i].age);
        printf("avgruns:%f\n",a[i].avgruns);
        printf("TM:%d\n",a[i].TM);
     }
    return 0;
}