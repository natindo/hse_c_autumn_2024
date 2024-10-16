// #include <stdio.h>
// int main() {
//     int n = 0;
//     scanf("%d", &n);
//     int minPrice = 10000, localMaxPrice = 0, maxPrice = 0;
//     for (int i = 0; i < n; i++) {
//         int value = 0;
//         scanf("%d", &value);
//         if ((localMaxPrice == maxPrice) && (value < minPrice)) {
//             minPrice = value;
//         }
//         localMaxPrice = value - minPrice;
//         if (maxPrice < localMaxPrice) {
//             maxPrice = localMaxPrice;
//         }
//     }
//     printf("%d", maxPrice);
//     return 0;
// }
