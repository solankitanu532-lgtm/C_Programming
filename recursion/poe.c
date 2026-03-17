#include <stdio.h>
int power(int x,int y){
    if (y==0) return 1;
    return x*power(x,y-1);
}
int main (){
    int n,r;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter a number :");
    scanf("%d",&r);
    int p = power(n,r);
    printf("%d",p);
    return 0;
}