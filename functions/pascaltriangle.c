# include<stdio.h>
int factorial(int x){
    int fact = 1;
    for (int k=2;k<=x;k++){
        fact = fact*k;
    }
    return (fact);
}
int combination (int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return (ncr);
}
int main (){
    int n,r ;
    printf("Enter a number :");
    scanf("%d",&n);
   // printf("Enter a number :");
   // scanf("%d",&r);
    for (int i=0;i<=n;i++){
        for (int l=1;l<=n-i;l++){
            printf(" ");
        }
        for (int j=0;j<=i;j++){
            int icj = combination(i,j);
             printf("%d ",icj);
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}