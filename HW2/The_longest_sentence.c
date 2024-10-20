// #include <stdio.h>
// #include <string.h>
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
//         while (c != '.' && c != EOF) {
//             if (c == ' ' || c == '\n') {
//                 counter++;
//             }
//             tempBuff[i++] = c;
//             if (c != EOF) {
//                 c = fgetc(file);
//             }
//         }
//         // add dot in array
//         tempBuff[i] = c;
//         if (counter > result) {
//             result = counter;
//             strcpy(buff, tempBuff);
//         }
//         if (c != EOF) {
//             c = fgetc(file);
//         }
//     }
//     // +1 due to space
//     printf("%s", buff);
//     // int i = 1;
//     // c = buff[i];
//     // while (c != '\0') {
//     //     printf("%c", c);
//     //     c = buff[++i];
//     // }
//     printf("\n%d", result);
//     fclose(file);
//     return 0;
// }
