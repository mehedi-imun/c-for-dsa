#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        for (int j = len - 1 - i; j >= len - 1 - i; j--) {
            if (str[i] != str[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);
    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
