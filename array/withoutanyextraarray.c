#include<stdio.h>
int main (){
    int a[5] = {4,7,6,4,3};
    for (int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i=0;i<5;i++){
        printf("%d ",a[4-i]);
    }
    return 0;
}