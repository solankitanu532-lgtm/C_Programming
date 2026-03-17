#include<stdio.h>
int main (){
    int a[5][5] = {1,2,3,4,5,6,7,8,9,2,3,4,5,6,4,5,6,7,8,9,3,3,3,5,4};
    int sum;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",a[i][j]);
          //  maxsum++;
        }
              printf("\n");
    }
    for(int i=0;i<5;i++){
        int maxsum = 0;
        
        for(int j=0;j<5;j++){
        maxsum = maxsum + a[i][j];
        sum = maxsum;
        }
        if(sum>maxsum)
        printf("%d ",sum);
    }
   // printf("%d",maxsum);
    return 0;
}