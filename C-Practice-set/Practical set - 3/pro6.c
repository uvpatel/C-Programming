#include <stdio.h>
#include <conio.h> // Console input output since back in days it is used in other old softwares like msdos. we should include but modern compiler not need this to be include.

int main(){
    char c;
    
    printf("Enter a character: ");
    getchar();  // Don't display and takes input.

    putchar(c); // Output the character

    char charater = getch(); // Read a character from input
    putch(charater); // Output the character

   
    return 0;
}