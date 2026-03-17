#include<stdio.h>
void fibbonaci(int x){
    if (x==1 || x==2) return 1;
    int ans1 = fibbonaci(x-1);
    int ans2 = fibbonaci(x-2);
    int ans = ans1 + ans2;
    printf("%d ",ans);
    return;
}
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    fibbonaci(n);
   
    return 0;
}