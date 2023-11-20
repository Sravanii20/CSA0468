#include <stdio.h>
#include <string.h>

void caesar_cipher(char str[], int shift) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = ((str[i] - 'a') + shift) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ((str[i] - 'A') + shift) % 26 + 'A';
    }
}

int main() {
    char str[100];
    int shift;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    caesar_cipher(str, shift);
    printf("Cipher: %s\n", str);

    return 0;
}
