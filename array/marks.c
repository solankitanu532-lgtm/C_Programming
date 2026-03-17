#include <stdio.h>
int main (){
  int a[10] = {23,12,43,23,45,56,64,32,98,87};
  for (int i=0;i<10;i++){
    if (a[i]<35)
    {
      printf("%d ",i);
    }
    
  }
  return 0;
}