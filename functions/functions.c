#include <stdio.h>
void prime(int x){
    int i;
    for (i=2;i<=x;i++){
      if (x%i==0){
        printf ("%d ",i);
      }}
    for (int j=2;j<=x;j++){
        if (i%j!=0)
      printf("%d ",j);
    }
}
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    prime(n);
    return 0;
}