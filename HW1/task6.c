// #include <stdio.h>
//
// void fillingMask(const char c, long long* word)
// {
//     const long bitMask = 1 << (c - 'a');
//     *word |= bitMask;
// }
//
// int main()
// {
//
//     long long firstWord = 0, result = 0;
//
//     char c = getchar();
//     while (c != '\n') {
//         fillingMask(c, &firstWord);
//         c = getchar();
//     }
//
//     c = getchar();
//     while (c != '\n') {
//         long long currentWord = 0;
//         while (c != ' ' && c != '\n') {
//             fillingMask(c, &currentWord);
//             c = getchar();
//         }
//
//         if (!(currentWord &= ~firstWord)) {
//             result++;
//         }
//         if (c == '\n') {
//             break;
//         }
//         c = getchar();
//     }
//     printf("%lld", result);
//     return 0;
// }