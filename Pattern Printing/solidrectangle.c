#include<stdio.h>
int main (){
    int n;
    printf("Enter a number of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter a number of coloumns :");
    scanf("%d",&m);
    for (int i=1;i<=n;i++){
        for (int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}