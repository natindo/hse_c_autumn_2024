//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long a = 0;
//
//    if (n == 1) {
//        printf("%ld ", a);
//    } else {
//        long b = 1;
//        long nextFib = 0;
//        for (int i = 2; i < n; i++) {
//            nextFib = a + b;
//            a = b;
//            b = nextFib;
//        }
//
//        printf("%ld %ld", b, a);
//        long prevFib = 0;
//        for (int i = n - 3; i >= 0; i--) {
//            prevFib = b - a;
//            b = a;
//            a = prevFib;
//            printf(" %ld", a);
//        }
//    }
//    return 0;
//}