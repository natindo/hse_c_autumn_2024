//
// Created by lysko on 16.10.2024.
//
//
// #include <stdio.h>
//
// int calculateLen(char* input)
// {
//     int sum = 0;
//     while (*input != '\0') {
//         sum++;
//         input++;
//     }
//     return sum;
// }
//
// void ourMemCpyFromAddr(char* dest, char* src, size_t len)
// {
//     for (size_t i = 0; i < len; i++) {
//         dest[i] = src[i];
//     }
// }
//
// void ourStrCat(char* destination, char* srcptr)
// {
//     int lenSource = calculateLen(destination);
//     int lenDest = calculateLen(srcptr);
//     ourMemCpyFromAddr(destination + lenSource, srcptr, lenDest);
// }
//
// int main(void)
// {
//     char a[10] = "123";
//     char* b = "987123";
//
//     ourStrCat(a, b);
//
//     for (int i = 0; i < calculateLen(a); ++i) {
//         printf("%c", a[i]);
//     }
//
//     return 0;
// }