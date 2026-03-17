#include<stdio.h>
int main (){
    int y;
    printf("Enter a value :");
    scanf("%d",&y);
    if (y%4==0){
        printf("leap year");
    }
     else
     {
        printf("not leap year" );
     }
     
    return 0;
}