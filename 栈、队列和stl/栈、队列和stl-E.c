#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%s", s) != 1) {
        return 0;
    }
    int count = 0;
    int len = strlen(s);
    int is_bad = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') {
            count++;
        } else if (s[i] == 'b') {
            count--;
            if (count < 0) {
                is_bad = 1;
                break;
            }
        } else {
            is_bad = 1;
            break;
        }
    }
    if (!is_bad && count == 0) {
        printf("Good");
    } else {
        printf("Bad");
    }
    
    return 0;
}
