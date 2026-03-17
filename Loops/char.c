# include<Stdio.h>
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 0;
    for (int i=1;i<=n;i++){
        int d = a + 65;
        char ch = (char)d;
        a++; 
    printf("%c~%d\n",ch,d);
    }
    return 0;
}