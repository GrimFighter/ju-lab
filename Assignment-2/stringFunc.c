#include <stdio.h>

// Function to calculate the length of a string (Strlen)
int stringLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to copy a string (Strcpy)
void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

// Function to concatenate two strings (Strcat)
void stringConcatenate(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

// Function to reverse a string (Strrev)
void stringReverse(char *str) {
    int len = stringLength(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to compare two strings (Strcmp)
int stringCompare(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0; // strings are equal
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("String Operations Menu:\n");
    printf("1. Calculate String Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Reverse String\n");
    printf("5. Compare Strings\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of the string: %d\n", stringLength(str1));
            break;
        case 2:
            printf("Enter the source string: ");
            scanf("%s", str1);
            stringCopy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;
        case 3:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            stringCopy(str1 + stringLength(str1), str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 4:
            printf("Enter a string to reverse: ");
            scanf("%s", str1);
            stringReverse(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 5:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            if (stringCompare(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}