
int cool_strcmp(const char* str1, const char* str2)
{
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2)
            return *str1 > *str2 ? (int)*str1 - *str2 - 1 : (*str2 - *str1 - 1) * -1;
        str1++;
        str2++;
    }
    return 0;
}
