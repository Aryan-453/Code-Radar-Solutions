#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int factorialrange(int a,int b){
    for(int i=a;i<=b;i++){
        printf("%d",factorial(i));
    }
}
int main(){
int start,end;
scanf("%d %d",&start, &end);
if (start > end || start < 0 || end < 0) {
        printf("Invalid input\n");
        return 1;
    }
factorialRange(start, end);
return 0;
}