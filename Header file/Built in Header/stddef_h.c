// 12. stddef.h
// Use: Defines macros/types like size_t, ptrdiff_t, NULL, and offsetof

#include <stddef.h>
#include <stdio.h>

struct Person {
    int id;
    char name[20];
    float salary;
};

int main() {
    printf("Offset of 'salary' in struct: %zu\n", offsetof(struct Person, salary));
    return 0;
}
