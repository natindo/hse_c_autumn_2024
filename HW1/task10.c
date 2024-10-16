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
//     unsigned long long n = 0, k = 0;
//     scanf("%llu %llu", &n, &k);
//     unsigned long long diff = n - k;
//
//     unsigned long long res = 1;
//     fact(n, &res);
//     n = res;
//
//     res = 1;
//     fact(diff, &res);
//     diff = res;
//
//     res = 1;
//     fact(k, &res);
//     k = res;
//
//     const int result = n / (diff * k);
//     printf("%d\n", result);
//     return 0;
// }
