// #include <stdio.h>
//
// void fact (const int a, unsigned long long* res) {
//     if (a == 0) {
//         *res = 1;
//         return;
//     }
//     if (a > 1) {
//         fact(a - 1, res);
//     }
//     *res *= a;
// }
//
// int main() {
//
//     int n = 0;
//     scanf("%d", &n);
//
//     unsigned long long res = 1;
//     fact(n, &res);
//     printf("%llu\n", res);
//
//     return 0;
// }