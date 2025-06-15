// 15. locale.h
// Use: Localization settings (language, currency formats)

#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    printf("Locale set to US English\n");
    return 0;
}
