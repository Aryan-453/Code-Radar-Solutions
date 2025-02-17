#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%num==0 && num%1==0)
    printf("prime");
    else
    printf("Not prime");
    return 0;
}