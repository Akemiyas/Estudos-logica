#include <stdio.h>
#include <string.h>

int vogal(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char s[45];
        scanf("%s", s);
        
        int dificil = 0, cons = 0;
        for (int i = 0; s[i]; i++) {
            if (!vogal(s[i])) cons++;
            else cons = 0;
            if (cons >= 3) { dificil = 1; break; }
        }
        
        printf("%s %s\n", s, dificil ? "nao eh facil" : "eh facil");
    }
    return 0;
}