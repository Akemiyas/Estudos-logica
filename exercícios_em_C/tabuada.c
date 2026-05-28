#include <stdio.h>

int main() {
    int n=1, num;
    int multi;
    scanf("%d", &num);
    for(n; n<11 ; n++){
    multi = num * n;
    printf("%d x %d = %d\n", n, num, multi);
    }
    return 0;
}
