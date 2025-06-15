// 6. time.h
// Use: Time and date handling (time(), ctime(), localtime())

#include <time.h>
#include <stdio.h>

int main() {
    time_t currentTime;
    time(&currentTime);
    printf("Current time: %s", ctime(&currentTime));
    return 0;
}
