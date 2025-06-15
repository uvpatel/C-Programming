        // 18. unistd.h (POSIX systems only)
        // Use: UNIX standard functions — sleep, file operations, process IDs (Linux/Mac)

#include <unistd.h>
#include <stdio.h>

int main() {
    printf("Sleeping for 3 seconds...\n");
    sleep(3);
    printf("Awake now!\n");
    return 0;
}
