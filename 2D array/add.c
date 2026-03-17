# include<stdio.h>
int main (){
    int r,c;
    printf("Enter a row:");
    scanf("%d",&r);
    printf("Enter a coloumns :");
    scanf("%d",&c);
    int a[r][c],b[r][c],d[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf ("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix of a is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The matrix of b is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
           d[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n");
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    return 0;
}