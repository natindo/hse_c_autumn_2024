// #include <stdio.h>
//
// enum {
//     scanfError = -1
// };
//
// int calculateLen(const char* input)
// {
//     int sum = 0;
//     while (*input != '\0') {
//         sum++;
//         input++;
//     }
//     return sum;
// }
//
// void ourMemCpyFromAddr(char* dest, const char* src, const int len)
// {
//     if (dest == NULL || src == NULL || len <= 0) {
//         return;
//     }
//     for (int i = 0; i < len; i++) {
//         dest[i] = src[i];
//     }
// }
//
// void ourStrCat(char* destination, const char* srcptr, const int n)
// {
//     const int lenSource = calculateLen(destination);
//     ourMemCpyFromAddr(destination + lenSource, srcptr, n);
// }
//
// int main(void)
// {
//     char a[256] = { 0 };
//     char b[256] = { 0 };
//     int n = 0;
//
//     if (!scanf("%s", a)) {
//         return scanfError;
//     }
//     if (!scanf("%s", b)) {
//         return scanfError;
//     }
//     if (!scanf("%d", &n)) {
//         return scanfError;
//     }
//
//     ourStrCat(a, b, n);
//
//     for (int i = 0; i < calculateLen(a); ++i) {
//         printf("%c", a[i]);
//     }
//
//     return 0;
// }