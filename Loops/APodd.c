#include<stdio.h>
int main (){
    int n;
    printf("Enter a number :");
  // n = 5;
     scanf("%d",&n);
     //printf("%d",n);
    for (int i=1;i<=n;i=i+2){
      printf("%d ",i);
    }
    return 0;
}