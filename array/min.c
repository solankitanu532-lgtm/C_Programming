# include <stdio.h>
int main (){
    int a[5] = {3,6,8,4,2};
    int min = 9;
    for (int i=0;i<5;i++){
        if (min>a[i])
        {
           min = a[i];
        }  
    } 
    printf("%d",min);
    return 0;
}