// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     char buff[256] = { 0 };
//     int numberPalin = 0, flag = 0;
//     int answer[256] = { 0 };
//     int numberStr = 0, iterartor = 0;
//     while (!feof(stdin)) {
//         if (fgets(buff, 256, stdin) == NULL)
//             break;
//         for (int i = 0; i < (int)strlen(buff); i++) {
//             buff[i] = tolower(buff[i]);
//         }
//         char* startBuff = buff;
//         char* endBuff = buff + strlen(buff) - 1;
//         while (startBuff < endBuff) {
//             flag = 0;
//             // check num or letter
//             while (!isalnum(*startBuff)) {
//                 startBuff++;
//             }
//             while (!isalnum(*endBuff)) {
//                 endBuff--;
//             }
//             if (*startBuff != *endBuff) {
//                 flag = 1;
//                 break;
//             }
//             startBuff++;
//             endBuff--;
//         }
//         if (flag == 0) {
//             answer[iterartor] = numberStr;
//             iterartor++;
//             numberPalin++;
//         }
//         for (int i = 0; i < (int)strlen(buff); i++) {
//             buff[i] = 0;
//         }
//         numberStr++;
//     }
//     printf("%d\n", numberPalin);
//     // memset is cool :)
//     for (int i = 0; i < numberPalin; i++) {
//         printf("%d ", answer[i]);
//     }
//     return 0;
// }