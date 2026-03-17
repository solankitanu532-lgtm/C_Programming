#include<stdio.h>
int main (){
    int a;
    int b;
    int c;
    printf("Enter first value :");
    scanf("%d",&a);
    printf("Enter second value :");
    scanf("%d",&b);
    printf("Enter third value :");
    scanf("%d",&c);
    if (a+b>c && b+c>a && a+c>b)
    {
     printf("they can be sides of a triangle");
    }
    
    return 0;
}