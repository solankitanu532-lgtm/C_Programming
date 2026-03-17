#include<stdio.h>
void england(){
    printf ("you are in england\n");
    return;
}
 void australia (){
    printf ("you are in australia\n");
    england();
    return;
 }
 int main() {
    void india ();
    india ();
 }
void india (){
    printf ("you are in india\n");
    australia();
    return;
}
