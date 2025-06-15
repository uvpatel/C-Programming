#include <stdio.h>

int main() {
    int password, attempt = 0;

login:
    printf("Enter numeric password: ");
    scanf("%d", &password);

    if (password == 1234) {
        printf("Access Granted. Welcome!\n");
    } else {
        attempt++;
        if (attempt < 3) {
            printf("Incorrect password. Attempts left: %d\n", 3 - attempt);
            goto login;
        } else {
            printf("Access Denied. Too many failed attempts.\n");
        }
    }

    return 0;
}
