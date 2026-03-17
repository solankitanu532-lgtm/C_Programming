#include<stdio.h>
void marks(int x[]){
    for (int i=0;i<=4;i++){
        if (x[i]<35){
            printf("%d ",i);
        }
    }
    return;
}
int main (){
    int a[5] = {23,56,32,87,98};
    marks(a);
  //  printf("%d",M);
    return 0;
}