
#include <stdio.h>
#include <string.h>
int cool_strcmp(const char* str1, const char* str2)
{
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2)
            return *str1 > *str2 ? (int)*str1 - *str2 - 1 : (*str2 - *str1 - 1) * -1;
        str1++;
        str2++;
    }
    if (*str1 != '\0' || *str2 != '\0')
        return *str1 ? 1 : -1;
    return 0;
}

int main()
{
    char* str1 = "abc";
    char* str2 = "abd"; // e
    int result = cool_strcmp(str1, str2);
    int result2 = strcmp(str1, str2);
    printf("my = %d really = %d\n", result, result2);
}
