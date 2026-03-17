#include<stdio.h>
int main (){
    int a[5] = {1,2,4,3,5};
    int count = 0;
    int x = 2;
    for (int i=0;i<5;i++)
    {
      if (x<a[i])
      {
       count ++;
      }
        
    }
    printf ("%d",count);
    return 0;
}