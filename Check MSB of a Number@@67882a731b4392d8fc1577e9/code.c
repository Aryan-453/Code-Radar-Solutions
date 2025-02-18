#include <stdio.h>
int main(){
    int num,msb,bits;
    scanf("%d",&num);
    bits=sizeof(int)*8;
    msb=0;
    for (int i=0;i<bits;i++){
        if(num&(1<<i)){
            msb=1;
        }
    }
    if (msb=1)
    printf("Set");
    else
    printf("Not Set");
    return 0;

}