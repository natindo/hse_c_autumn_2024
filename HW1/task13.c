// #include <stdint.h>
// #include <stdio.h>
//
// int main() {
//     uint32_t n = 0;
//     // scanf("%u",&n);
//
//     for(int j=0;j<4294967295;j++) {
//         const int bits = 32;
//         uint32_t leftBits = 0;
//         uint32_t rightBits = 0;
//
//         for(int i = 0; i <= (bits / 2) - 1; i++) {
//
//             leftBits += ((j >> (bits - 1 - i)) & 1) * 2^i;
//             rightBits += ((j >> i) & 1) * 2^i;
//         }
//
//
//         if (leftBits == rightBits) {
//             // printf("true");
//             printf("%u\n", j);
//         } else {
//             // printf("false");
//
//         }
//     }
//
//     return 0;
// }
