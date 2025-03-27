#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int factorialrange(a,b){
    int a,b;
    for(i=a;i<=b;i++){
        factorial(i)
    }
}
int main(){
int start,end;
scanf("%d %d",&start, &end);
factorialRange(start, end);
return 0;
}