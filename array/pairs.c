#include <stdio.h>
int main (){
    int a[5] = {4,6,8,4,5};
    int x = 12;
   int totalpairs = 0;
    for (int i=0;i<=4;i++){
        for (int j=1+i;j<=4;j++){
         if (a[i]+a[j]==12)
         {
            totalpairs++;
           printf("(%d %d)",a[i],a[j]);
         }
         
        }
    }
    printf("\n%d",totalpairs);
    return 0;
}