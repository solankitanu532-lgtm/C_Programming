#include <stdio.h>
int main(){
    int a ,b, c;
    printf("enter first value :");
    scanf("%d",&a);
    printf("enter second value :");
    scanf("%d",&b);
    printf("enter third value :");
    scanf("%d",&c);
    if (a>b){
     if (a>c){
        printf("%d is greatest ",a);
     }
      else{
        printf("%d is greatest ",c);
      }
    }
    else {
        if(b>c){
        printf("%d is greatest",b);
        }
        else{
            printf("%d is greatest ",c);
        }
    }
    return 0;
}
