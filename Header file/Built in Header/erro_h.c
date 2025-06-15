// 11. errno.h
// Use: Provides access to the last error number set by a library function (e.g., file I/O)
// Macro Example: errno, perror(), strerror()

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *f = fopen("nonexistent.txt", "r");
    if (f == NULL) {
        printf("Error code: %d\n", errno);
        perror("fopen");  // shows system error
        printf("Error message: %s\n", strerror(errno));
    }
    return 0;
}
