#include<stdio.h>
int main (){
    int a[7] = {2,3,4,5,6,7,5};
    for(int i=0;i<7;i++){
        if (i%2!=0){
            a[i] = a[i]*2;
        }
        else {
            a[i] = a[i] + 10;
        }
    }
    for (int j=0;j<7;j++){
        printf ("%d ",a[j]);
    }
    return 0;
}