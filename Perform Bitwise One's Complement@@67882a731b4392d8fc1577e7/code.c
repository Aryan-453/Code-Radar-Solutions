#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    unsigned int result = ~a;

    printf("%u",result);

    return 0;
}
