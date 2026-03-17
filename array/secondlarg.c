#include<stdio.h>
int main (){
    int a[7] = {2,3,6,9,8,7,4};
    int max = 0;
    int smax = 0;
    for (int i=0;i<7;i++){
        if (max<a[i])
        {
           max = a[i];
        } 
        else if (smax<a[i]){
            smax = a[i] ;
        }
    }
    printf("%d\n",smax);
    printf("%d",max);
        return 0;
} 