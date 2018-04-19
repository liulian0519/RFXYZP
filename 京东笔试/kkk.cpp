#include <stdio.h>
#include <string.h>

int main(void) {
    int row, k = 0;
    char s[100];
    int x, y;
    int m, n;
    int cnt = 0;
    
    scanf("%s", s);
    scanf("%d", &row);

    int a[row];
    
    while (row > 0) {
        scanf("%d%d%d%d", &m, &n, &x,&y);
        for (int i = 0; i < strlen(s); ++i) {
            switch(s[i]) {
                case('u'):
                    x--;
                    break;
                case('d'):
                    x++;
                    break;
                case('l'):
                    y--;
                    break;
                case('r'):
                    y++;
                    break;
                default:
                    break;
            }
            
            if (x > 0 && x <= m && y > 0 && y <= n) {
                cnt++;            
            }
            else {
                break;
            }
        } 
        if (x == 0 || y == 0 || x == m + 1 || y == n + 1){           
  //          printf("%d\n", cnt + 1);
            cnt++;
        }
        else {
    //        printf("%d\n", cnt);
        }
        a[k++] = cnt;
        cnt = 0;

        row--;
    }
    for (int i = 0; i < k; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
