#include<stdio.h>
void reverse(int arr[],int a,int b){
  int i,j;
  for( i=a,j=b;i<=j;i++,j--){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}
int main (){
  int arr[7] = {1,2,3,4,5,6,7};
  int n = 7;
  int k = 50;
  k = k%n;
  reverse(arr,0,6);
  reverse(arr,0,k-1);
  reverse(arr,k,6);
  for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}