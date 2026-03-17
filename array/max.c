#include<stdio.h>
int main (){
    int a[4] = {-3,-4,-5,-2};
    int max = -1;
    for (int i=0;i<4;i++){
        if (max>a[i])
        {
           max = a[i];
        }
    }
      printf("%d",max);  
    return 0;
}