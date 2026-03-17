#include<stdio.h>
int main (){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if(x%5==0){
       printf("divisible");
    }
    else{
      printf("not divisible") ; /* code */
    }
    
    return 0;
}