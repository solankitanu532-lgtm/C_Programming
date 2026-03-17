#include<stdio.h>
void swap (int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main (){
   int a,b;
   printf("Enter a number :");
   scanf("%d",&a);
   printf("Enter a number :");
   scanf("%d",&b);
   swap(&a,&b);
   printf("The value of a is %d",a);
   printf("\nThe value of b is %d",b);
    return 0;
}