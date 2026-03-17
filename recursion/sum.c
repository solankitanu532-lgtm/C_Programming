#include<stdio.h>
int sum (int x){
    if (x==0) return 0;
     int s = x +sum(x-1);
    return s;
}
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}