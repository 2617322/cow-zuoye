#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int jump[10][10] = {0};
    jump[1][3] = jump[3][1] = 2;
    jump[4][6] = jump[6][4] = 5;
    jump[7][9] = jump[9][7] = 8;
    
    jump[1][7] = jump[7][1] = 4;
    jump[2][8] = jump[8][2] = 5;
    jump[3][9] = jump[9][3] = 6;
    
    jump[1][9] = jump[9][1] = 5;
    jump[3][7] = jump[7][3] = 5;
    while (scanf("%s", s) != EOF) {
        int used[10] = {0};
        int valid = 1;
        int len = strlen(s);
        if (len == 1) {
            printf("YES\n");
            continue;
        }
        int prev = s[0] - '0';//×Ö·û×ªÊý×Ö
        used[prev] = 1;
        for (int i = 1; i < len; i++) {
            int cur = s[i] - '0';
            if (used[cur] == 1) {
                valid = 0;
                break;}
            int mid = jump[prev][cur];
            if (mid != 0 && used[mid] == 0) {
                valid = 0;
                break;
            }
            used[cur] = 1;
            prev = cur;
        }
        if (valid==1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
