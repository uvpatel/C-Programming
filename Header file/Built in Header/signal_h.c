// 14. signal.h
// Use: Signal handling like intercepting Ctrl+C, handling termination signals

#include <signal.h>
#include <stdio.h>

void handle_sigint(int sig) {
    printf("Caught signal %d (Ctrl+C)\n", sig);
}

int main() {
    signal(SIGINT, handle_sigint);  // catch Ctrl+C
    while (1) {
        // infinite loop
    }
    return 0;
}
