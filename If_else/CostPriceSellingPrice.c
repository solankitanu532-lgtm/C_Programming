#include<stdio.h>
int main (){
    int cp;
    printf("The cost price is :");
    scanf("%d",&cp);
    int sp;
    printf("The selling price is :");
    scanf("%d",&sp);
    if (cp>sp){
    printf("seller made loss ");
    }
    else{
        printf("seller made profit ");
    }
    return 0;
}