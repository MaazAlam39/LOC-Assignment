#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], vowels[100], consonants[100];
    int i, j = 0, k = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Moving vowels and consonants to their respective sides
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
                vowels[j] = str[i];
                j++;
            } else {
                consonants[k] = str[i];
                k++;
            }
        }
    }
    vowels[j] = '\0';
    consonants[k] = '\0';
    // Concatenating vowels and consonants to form the updated string
    strcat(vowels, consonants);
    printf("The updated string is: %s\n", vowels);
    return 0;
}
