#include <stdio.h>

int countCharInString(char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character: ");
    scanf(" %c", &c);
    int count = countCharInString(str, c);
    printf("The character %c occurs %d times in the string.\n", c, count);
    return 0;
}
