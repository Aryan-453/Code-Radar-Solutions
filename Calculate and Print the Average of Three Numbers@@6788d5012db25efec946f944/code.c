#include <stdio.h>
int main(){
    float average;
    int a,b,c;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    average = (a+b+c)/3;
    printf("Average: %.2f\n",average);
    return 0;
}