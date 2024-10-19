#include <stdio.h>

int main () {
    char buf[256] = {0};
    while (!feof(stdin)) {
      fgets(buf, 256, stdin);
    }
    for (int i = 0; i < 256; i++) {
        printf("%c", buf[i]);
    }

    return 0;
}