// #include <stdio.h>
//
// enum {
//     fileNotOpen = -1
// };
//
// int main()
// {
//     FILE* file = fopen("text.txt", "r");
//     if (file == NULL) {
//         perror("file not opened");
//         return fileNotOpen;
//     }
//     char c = fgetc(file);
//     int result = 0;
//     char buff[256] = { 0 };
//     while (c != EOF) {
//         int counter = 0, i = 0;
//         char tempBuff[256] = { 0 };
//         while (c != '.') {
//             if (c == ' ' || c == '\n') {
//                 counter++;
//             }
//             tempBuff[i++] = c;
//             c = fgetc(file);
//         }
//         if (counter > result) {
//             result = counter;
//             i = 0;
//             char d = tempBuff[i];
//             while (d != '\0') {
//                 buff[i] = tempBuff[i];
//                 i++;
//                 d = tempBuff[i];
//             }
//         }
//         c = fgetc(file);
//     }
//     // +1 due to space
//     int i = 1;
//     c = buff[i];
//     while (c != '\0') {
//         printf("%c", c);
//         c = buff[++i];
//     }
//     printf("\n%d", result);
//     return 0;
// }
