// #include <stdio.h>
// #include <string.h>
// const char* cool_strstr(const char* str1, const char* str2)
// {
//     const char* ptrStr1 = 0;
//     const char* ptrStr2 = 0;
//     while (*str1) {
//         if (*str1 == *str2) {
//             int flag = 1;
//             ptrStr1 = str1;
//             ptrStr2 = str2;
//
//             while (*ptrStr1 && *ptrStr2) {
//                 flag &= *ptrStr1 == *ptrStr2;
//                 ptrStr1++;
//                 ptrStr2++;
//             }
//
//             if (flag) {
//                 return str1;
//             }
//         }
//         str1++;
//     }
//     return 0;
// }
//
// int main()
// {
//     const char* str1 = "aaabbba";
//     const char* str2 = "ab";
//     const char* str3 = cool_strstr(str1, str2);
//     for (int i = 0; i < strlen(str3); i++) {
//         printf("%c", str3[i]);
//     }
//     return 0;
// }