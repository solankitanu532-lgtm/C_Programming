#include<stdio.h>
int main (){
     int a[2][3],b[3][4];
    int rc = 3;
    int res[2][4];
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            scanf("%d ",&b[i][j]);
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<4;j++){
            res[i][j] = 0;
            for (int k=0;k<rc;k++){
                res[i][j] = res[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("\n");
    for (int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

