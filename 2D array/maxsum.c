#include<stdio.h>
int main (){
    int r,c,i,j;
    printf("Enter a number :");
    scanf("%d",&r);
    printf("Enter a number :");
    scanf("%d",&c);
    int a[r][c];
    int sum = 0;
    int max = 0;
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
     for (i=0;i<r;i++){
        sum = 0;
        for( j=0;j<c;j++){
            if(a[i][j]==1)
            sum++;
        }
        if(max<sum){
            max = sum;
            printf("(%d,%d)",i,j);
        }
    }
    printf("%d",max);
    return 0;
}