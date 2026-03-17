#include<Stdio.h>
void swap(int x,int y){
    int temp = x;
     x = y;
     y = temp;
     printf("The value of a is %d",x);
     printf("\nThe value of b is %d",y);
     return;
}
int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}