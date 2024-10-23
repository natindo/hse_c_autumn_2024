
#include <stdio.h>
#include <string.h>
int cool_strcmp(const char* str1, const char* str2)
{
    while (*str1 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main(void)
{
    char* str1 = "as";
    char* str2 = "as11"; // e
    int result = cool_strcmp(str1, str2);
    int result2 = strcmp(str1, str2);
    printf("my = %d really = %d\n", result, result2);
    return 0;
}
