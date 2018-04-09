/* 



 */ 
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[55];
    int cnt = 0;

    scanf("%s", s);
    for (int i = 0; i < strlen(s) - 1; ++i) {
        if (s[i] == s[i - 1] && s[i] == s[i + 1]) {

        }
        else {
            cnt++;
        }
    }    
    printf("%d", cnt);


    return 0;
}
