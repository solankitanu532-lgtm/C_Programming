#include<stdio.h>
int main (){
    int b[5];
   int a[5] = {5,6,3,4,8};
   for (int i=0;i<5;i++){
    printf("%d ",a[i]);
    
   }
   printf("\n");
   for (int i=0;i<5;i++){
    b[i] = a[4-i];
    printf("%d ",b[i]);
   }

    return 0;
}