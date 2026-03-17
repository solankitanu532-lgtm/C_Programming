#include<stdio.h>
void fun (int x[]){
    x[0] = 12;
    return;
}
int main (){
    int arr[4] = {1,2,3,4};
    printf("%d",arr[0]);
    fun(arr);
    printf("\n%d",arr[0]);
    return 0;
}