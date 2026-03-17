#include<stdio.h>
#include<conio.h>
void main (){
    int t;
    printf("Enter a number :");
    scanf ("%d",&t);
    switch(t){
    case 0:
        printf("sunday");
        break;
     case 1:
     printf("\nmonday");
     break;
     case 2:
     printf ("\ntuesday");
     break;
     case 3:
     printf ("\nwednesday");
     break;
     case 4:
     printf ("\nthursday");
     break;
     case 5:
     printf ("\nfriday");
     break;
     case 6:
     printf ("\nsaturday");
     break;
     default: 
     printf ("\n exit from screen");
    }
    getch ();
}