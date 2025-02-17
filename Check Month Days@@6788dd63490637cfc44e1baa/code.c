#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==2)
    printf("28");
    else if(num%2==0 && num<=12)
    printf("30");
    else if ((!(num%2==0)) && (num<=12))
    printf("31");
    else
    printf("Invalid month");
    return 0;
}