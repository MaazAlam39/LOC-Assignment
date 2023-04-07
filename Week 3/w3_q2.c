#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}; // Initialize frequency array with 0

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin); // read input string

    for(int i = 0; i < strlen(str); i++)
    {
        freq[(int) str[i]]++; // Increment frequency of character
    }

    printf("Frequency of each character in the string: \n");
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c : %d\n", (char) i, freq[i]); // Print character and its frequency
        }
    }

    return 0;
}
