#include<stdio.h>
int main (){
    int r,c;
    printf("Enter a number :");
    scanf("%d",&r);
    printf("Enter a number :");
    scanf("%d",&c);
    int a[r][c];
    for (int i=0;i<r;i++){
     for (int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
     } 
    } printf("\n");
    for (int i=0;i<c;i++){
        for (int j=i;j<r;j++){
      int temp = a[i][j];
      a[i][j] = a[j][i];
      a[j][i] = temp;
        }
        printf("\n");
    }
     printf("\n");
    for (int i=0;i<r;i++){
        int k = r-1;
        for (int j=0;j<k;j++){
      int temp = a[i][j];
      a[i][j] = a[i][k];
      a[i][k] = temp;
      k--;
        }
    }
    printf("\n");
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
      printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}