#include<stdio.h>
int main (){
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    
    for(int i=1;i<=a;i++){
        int d = 65;
        for(int j=1;j<=b;j++){
            char ch = d;
            printf("%c",ch);
            d = d + 1;
        }
        printf("\n");
    }
    return 0;
}