// 10. assert.h
// Use: Debugging with assert() to check conditions during runtime

#include <assert.h>
#include <stdio.h>

int main() {
    int x = 5;
    assert(x > 0);  // program continues
    assert(x < 0);  // this will stop the program with an error
    return 0;
}
