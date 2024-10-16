// #include "stdio.h"
//
// int main(void) {
//
//     int n = 0, capacity = 0, x = -1, currentVolume = 0, result = 0, currentPosition = 0;
//     if (!scanf("%d %d", &n, &capacity)) {
//         return 1;
//     }
//     currentVolume = capacity;
//     while (n--) {
//         int water = 0;
//         if (!scanf("%d", &water)) {
//             return 1;
//         }
//
//         if (x < 0) {
//             x = currentPosition;
//             result += currentPosition;
//         }
//
//         if (currentVolume < water) {
//             result += currentPosition * 2 + 1;
//             currentVolume = capacity - water;
//         } else {
//             currentVolume -= water;
//             result += 1;
//         }
//         currentPosition++;
//     }
//     printf("%d", result);
//
//     return 0;
// }
//
