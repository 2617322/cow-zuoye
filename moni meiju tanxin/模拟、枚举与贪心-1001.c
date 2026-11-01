#include <stdio.h>
#include <string.h>

char s[200005];

int main() {
    int n;
    long long t;
    scanf("%d %lld", &n, &t);
    scanf("%s", s);

    int dot = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '.') {
            dot = i;
            break;
        }
    }
    if (dot == -1) {
        printf("%s\n", s);
        return 0;
    }
    int five = -1;
    for (int i = dot + 1; i < n; i++) {
        if (s[i] - '0' >= 5) {
            five = i;
            break;
        }
    }
    if (five == -1 || t == 0) {
        printf("%s\n", s);
        return 0;
    }
    while (t > 0 && five > dot) {
        t--;
        s[five] = '\0';
        five--;
        if (s[five] == '.') {
            s[five] = '\0';
            dot = -1;
            five--;
        }
        
        s[five]++;
        while (s[five] == ':') {
            s[five] = '0';
            five--;
            if (five < 0) {
                five = -1;
                break;
            }
            if (s[five] == '.') {
                s[five] = '\0';
                dot = -1;
                five--;
                if (five < 0) {
                    five = -1;
                    break;
                }
            }
            s[five]++;
        }
        if (five < 0) break;
        if (dot == -1) break; 
        if (s[five] < '5') break; 
    }
    if (five == -1) {
        printf("1");
        five = 0;
    }
    int len = strlen(s);
    int last = len - 1;
    if (dot != -1) {
        while (last > dot && s[last] == '0') {
            last--;
        }
        if (last == dot) {
            last--;
        }
    }
    for (int i = 0; i <= last; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
