#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n%5==0 && n%3==0){
     printf("n is divisible");
    }
    else 
    {
       printf("n is not divisible"); /* code */
    }
    
    return 0;
}