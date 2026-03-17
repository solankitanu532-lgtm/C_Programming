#include<stdio.h>
#include<string.h>
int main (){
    char str[] = "physics";
    char* ptr = str;
    printf("%p\n",&str);
    printf("%p\n",ptr);
    printf("%p",&str[0]);
    return 0;
}