#include<stdio.h>
void increasing(int x,int n){
    if (n==0)  return;
    printf ("%d\n",n);
    if (x>n)
    increasing(n-1);
    printf ("%d\n",x);
    return;
}
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}