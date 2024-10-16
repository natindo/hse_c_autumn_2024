#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("file not opened");
        return 1;
    }
    char c = fgetc(file);
    int result = 0;
    char buff[256] = {0};
    while (c != EOF) {
        int counter = 0;
        char tempBuff[256] = {0};
        while (c != '.') {
            int i = 0;
            if (c == ' ' || c == '\n') {
                counter++;
            }
            tempBuff[i++] = c;
            c = fgetc(file);
        }
        if (counter > result) {
            result = counter;
            int i = 0;
            char d = tempBuff[i];
            while (d != '\0') {
                buff[i] = tempBuff[i];
                i++;
            }
        }
        c = fgetc(file);
    }
    int i = 0;
    c = buff[i];
    while (c != '\0') {
        printf("%c", c);
        c = buff[i];
        i++;
    }
    printf("%d\n", result);

}
