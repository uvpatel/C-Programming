// 13. stdint.h
// Use: Fixed width integer types (e.g., int8_t, int32_t, uint64_t)

#include <stdint.h>
#include <stdio.h>

int main() {
    int8_t smallNum = 127;      // 8-bit integer
    uint64_t bigNum = 1234567890123456ULL;  // 64-bit unsigned
    printf("Small: %d, Big: %llu\n", smallNum, bigNum);
    return 0;
}
