#include <stdio.h>
int main(){
    float average;
    float a,b,c;
    printf("");
    scanf("%.2f %.2f %.2f",&a,&b,&c);
    average = (a+b+c)/3;
    printf("Average: %.2f\n",average);
    return 0;
}