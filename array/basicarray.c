#include<stdio.h>
int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   int a[n];
   for (int i=0;i<n;i++){
    scanf("%d ",&a[i]);
   }
   for (int i=0;i<n;i++){
    if (i%2!=0)
    {
        a[i] = a[i]*2;
        printf("\n%d ",a[i]);
    }
    else{
        a[i] = a[i] + 10;
        printf("\n%d ",a[i]);
    }
   }
    return 0;
}