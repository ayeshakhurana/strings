//write a code to input 2 different strings and merge them into one string and display the contents
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    char merged[200];
    int i, j;
    for (i = 0; i < length1; i++) {
        merged[i] = str1[i];
    }
    for (j = 0; j < length2; j++) {
        merged[i + j] = str2[j];
    }
    merged[i + j] = '\0';

    printf("Merged string: %s\n", merged);

    return 0;
}
