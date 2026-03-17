#include <stdio.h>
void add(){
    int a, b;
    printf ("Enter first number :");
    scanf("%d",&a);
    printf ("Enter second number :");
    scanf ("%d",&b);
    int c = a + b;
    printf("%d",c);
} 
int main (){
     add (); 
    return 0;
}