// #include <stdio.h>
//
// int main() {
//
//     int n = 0;
//     scanf("%d",&n);
//     int max = -1000, prevMax = -1000, prevPrevMax = -1000, maxNeg = 1000, prevMaxNeg = 1000;
//     while (n) {
//         int num = 0;
//         scanf("%d",&num);
//
//         if (num > max) {
//             prevPrevMax = prevMax;
//             prevMax = max;
//             max = num;
//         } else if (num > prevMax) {
//             prevPrevMax = prevMax;
//             prevMax = num;
//         } else if (num > prevPrevMax) {
//             prevPrevMax = num;
//         }
//
//         if (num < maxNeg) {
//             prevMaxNeg = maxNeg;
//             maxNeg = num;
//         } else if (num < prevMaxNeg) {
//             prevMaxNeg = num;
//         }
//         n--;
//     }
//         if (max * prevMax * prevPrevMax > max * maxNeg * prevMaxNeg) {
//             printf("%d", max * prevMax * prevPrevMax);
//         } else {
//             printf("%d", max * maxNeg * prevMaxNeg);
//         }
//
//     return 0;
// }
