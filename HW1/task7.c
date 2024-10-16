// #define MINASCIINUMBER 48
// #define MAXASCIINUMBER 56
// #include <stdio.h>
//
// void calculateCurrentNumber(char *c, int *currentNumber) {
//     while (*c != '\n' && *c != ' ') {
//         *currentNumber *= 10;
//         *currentNumber += *c - '0';
//         *c = getchar();
//     }
// }
//
// int main() {
//     int prevNumber = 0, currentNumber = 0;
//     char c = getchar();
//     while (c != '\n') {
//         if (c >= MINASCIINUMBER && c <= MAXASCIINUMBER) {
//             calculateCurrentNumber(&c, &currentNumber);
//             if (currentNumber <= prevNumber) {
//                 printf("0");
//                 return 0;
//             }
//             prevNumber = currentNumber;
//             currentNumber = 0;
//         }
//         if (c == '\n') {
//             break;
//         }
//         c = getchar();
//     }
//     printf("1");
//
//     return 0;
// }
