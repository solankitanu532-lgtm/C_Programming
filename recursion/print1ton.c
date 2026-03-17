#include <stdio.h>
 void count (int x , int y){
    if (x>y) return;
    printf ("%d ",x);
    count(x+1,y);
    return; 
 }
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
     count(1,n);
    return 0;
}