#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("age of ram :");
    scanf("%d",&a);
    printf("age of shyam :");
    scanf("%d" ,&b);
    printf("age of ajay :");
    scanf("%d",&c);
    if (a<b)
    { if (a<c){
        printf("ram is youngest");
    }
    else{
        printf("ajay is youngest");
    }
    }
    else{
        if(b<c){
            printf("shyam is youngest");
        }
        else{
            printf("ajay is younggest");
        }
    }
    
    return 0;
}