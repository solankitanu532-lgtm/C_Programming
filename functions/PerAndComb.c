#include<stdio.h>
int factorial(int x){
  int fact = 1;
  for (int i=1;i<=x;i++){
   fact = fact*i;
  }
  return (fact);
}
int main (){
  int n,r;
  printf("Enter a n:");
  scanf("%d",&n);
  printf("Enter a r:");
  scanf("%d",&r);
   //factorial(n,r);
   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
  printf("%d",ncr);
  return 0;
}