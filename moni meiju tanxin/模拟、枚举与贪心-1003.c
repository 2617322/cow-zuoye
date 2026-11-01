#include <stdio.h>
#define STATE_NORMAL  0
#define STATE_STRING  1
#define STATE_COMMENT 2
int main() {
    int state = STATE_NORMAL;
    int c;
    char buf[10005];
    int idx = 0;
    while ((c = getchar()) != EOF) {
        if (state == STATE_NORMAL) {
            if (c == '\\') {
                putchar(c);
                int next = getchar();
                if (next == '"') {
                    putchar(next);
                } else {
                    if (next != EOF) ungetc(next, stdin);
                }
            } 
            else if (c == '"') {
                putchar('"');
                state = STATE_STRING;
            } 
            else if (c == '/') {
                int next_c = getchar();
                if (next_c == '*') {
                    idx = 0;
                    buf[idx++] = '/';
                    buf[idx++] = '*';
                    state = STATE_COMMENT;
                } else {
                    putchar('/');
                    if (next_c != EOF) ungetc(next_c, stdin);
                }
            } 
            else {
                putchar(c);
            }
        } 
        
        else if (state == STATE_STRING) {
            if (c == '\\') {
                putchar(c);
                int temp = getchar();
                if (temp != EOF) putchar(temp);
            } 
            else if (c == '"') {
                putchar(c);
                state = STATE_NORMAL;
            } 
            else {
                putchar(c);
            }
        } 
        
        else if (state == STATE_COMMENT) {
            if (c == '*') {
                int next = getchar();
                if (next == '/') {
                    state = STATE_NORMAL;
                } else {
                    buf[idx++] = '*';
                    if (next != EOF) ungetc(next, stdin);
                }
            } 
            else {
                buf[idx++] = c;
            }
        }
    }
    if (state == STATE_COMMENT) {
        for (int i = 0; i < idx; i++) {
            putchar(buf[i]);
        }
    }

    return 0;
}
