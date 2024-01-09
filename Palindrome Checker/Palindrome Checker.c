#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

void main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    }
    else{
        printf("%s is not a palindrome.\n",input);
    }

}
