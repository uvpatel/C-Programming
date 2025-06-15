// 3. string.h
// Use: String manipulation functions (strlen(), strcpy(), strcat(), strcmp())

#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = " World";
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);  // Hello World
    return 0;
}
