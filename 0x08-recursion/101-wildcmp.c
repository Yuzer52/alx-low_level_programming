#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2) {
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    if (*s1 == *s2 || *s2 == '*') {
        return wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);
    }

    return 0;
}

int main() {
    char str1[] = "hello*world";
    char str2[] = "h*llo*wild";

    if (wildcmp(str1, str2)) {
        printf("The strings are considered identical.\n");
    } else {
        printf("The strings are not identical.\n");
    }

    return 0;
}
