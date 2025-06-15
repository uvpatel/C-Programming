// 5. ctype.h
// Use: Character type functions (isalpha(), isdigit(), toupper(), tolower())


#include <ctype.h>
#include <stdio.h>

int main() {
    char ch = 'a';
    if (isalpha(ch)) {
        printf("%c is an alphabet\n", ch);
        printf("Uppercase: %c\n", toupper(ch));
    }
    return 0;
}
