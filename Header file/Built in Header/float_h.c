// 9. float.h
// Use: Constants for floating-point limits (e.g., FLT_MAX, DBL_MIN)

#include <float.h>
#include <stdio.h>

int main() {
    printf("Max float: %e\n", FLT_MAX);
    printf("Min double: %e\n", DBL_MIN);
    return 0;
}
