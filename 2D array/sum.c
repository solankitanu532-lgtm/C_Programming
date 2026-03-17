#include<stdio.h>
int main (){
    int r,c;
    printf("Enter a number :");
    scanf("%d",&r);
    printf("Enter a number :");
    scanf("%d",&c);
    int a[r][c];
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum +  a[i][j];

        }
    }
    printf("%d",sum);
    return 0;
}