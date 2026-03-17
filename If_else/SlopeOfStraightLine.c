#include<stdio.h>
int main (){
    int x1,x2,x3;
    int y1,y2,y3;
    x1 = 2; y1 = 4;
    x2 = 4; y2 = 3;
    x3 = 2; y3 = 6;
    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);
    printf("%f %f",m1 ,m2);
    if (m1 = m2){
   printf("lies on a straight line");
    }
    else{
        printf("not lie on a straight line");
    }
return 0;
}