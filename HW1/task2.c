// #include <stdio.h>
//
// long long invert(long long num) {
//
//     if (num == 0) {
//         return 1;
//     }
//
//     long long mask = 1;
//     long long kek = num;
//     while (num) {
//         kek = (kek & mask) ? (kek & ~mask) : (kek | mask);
//         num /= 2;
//         mask *= 2;
//     }
//     return kek;
// }
//
// int main () {
//
//     long long num = 0;
//     scanf("%lld",&num);
//     num = invert(num);
//     printf("%lld\n",num);
//
//     return 0;
// }
