#include<stdio.h>
int main (){
    int a[4] = {1,2,3,4};
    int* x = &a[2];
    int** y = &x;
    printf("%d\n",x);
    printf("%p",&a[2]);
    printf("\n%p",&x);
    printf("\n%d",y);
    return 0;
}