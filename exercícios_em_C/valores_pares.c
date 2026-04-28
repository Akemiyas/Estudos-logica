#include <stdio.h>
 
int main() {
    int n1,n2,n3,n4,n5, pares;
    pares = 0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if(n1%2==0) {
        pares += 1;
    } 
    if(n2%2==0) {
        pares += 1;
    }
    if(n3%2==0) {
        pares += 1;
    }
    if(n4%2==0) {
        pares += 1;
    }
    if(n5%2==0) {
        pares += 1;
    }
    printf("%d valores pares\n", pares);
    return 0;
}