#include<stdio.h>
#include<string.h>
int main (){
   char ch[40];
   scanf("%[^\n]s",ch);
   puts("your input is :");
   puts(ch);
    return 0;
}