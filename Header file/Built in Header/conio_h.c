#include <conio.h>

int main() {
    char ch;
    printf("Press a key...");
    ch = getch();  // get char without Enter
    printf("\nYou pressed: %c\n", ch);
    return 0;
}
