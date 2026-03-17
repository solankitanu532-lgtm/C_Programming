#include<stdio.h>
int main (){
    int a[6] = {2,3,4,5,0,2};
    int x = 9;
    int count = 0;
    for (int i=0;i<6;i++){
    for (int j=i+1;j<6;j++){
    for (int k=j+1;k<6;k++){
     if (a[i]+a[j]+a[k]==9){
        count++;
        printf("(%d %d %d)",a[i],a[j],a[k]);
     }
    }
    }
    }
    printf("\n%d",count);
    return 0;
}