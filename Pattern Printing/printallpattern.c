#include<stdio.h>
int main (){
    int n,r;
    printf("Enter a number :");
    scanf ("%d",&n);
    printf("Enter a number :");
    scanf("%d",&r);
    for (int i=1;i<=n;i++){
    for (int j=1;j<=r;j++){
        if ((i==1 || j==1) || (i==n || j==r))
     printf("*");
     else {
        printf(" ");
     }
    }
    printf("\n");
    }
    return 0;
}