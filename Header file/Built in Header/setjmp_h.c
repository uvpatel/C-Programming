
// 16. setjmp.h
// Use: Jumping between code sections (non-local goto); used for error handling

#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;

void error() {
    longjmp(buf, 1);
}

int main() {
    if (setjmp(buf)) {
        printf("An error occurred!\n");
    } else {
        printf("Running normally\n");
        error();
    }
    return 0;
}
