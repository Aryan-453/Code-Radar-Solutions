#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+')
    printf("%d\n",a+b);
    else if(ch=='-')
    printf("%d\n",a-b);
    else if(ch=='*')
    printf("%d\n",a*b);
    else if(ch=='/')
    b!=0 ?  printf("%d\n",a/b) : printf("error");
    else
    printf("Invalid");
    return 0;
}