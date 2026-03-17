#include<stdio.h>
int main (){
    int n;
    // printf("Enter a number :");
    // scanf("%d",&n);
    int a[5] = {1,2,3,2,1};
    // for(int i=0;i<n-1;i++){
    //     scanf("%d ",&a[i]);
    // }
    // int ml = n\2 + 1;
      for(int i=0;i<5;i++){
        if (a[i]==a[4-i]) {
           printf("This is a palindrome");
        }
        
      }
    return 0;
}