//#include <stdio.h>
//
//#define LENGHTENG 26
//
//int main()
//{
//    char c = { 0 };
//    int once = 0, notOnce = 0;
//
//    while ((c = getchar()) != '\n') {
//        const int bitMask = 1 << (c - 'a');
//
//        if (notOnce & bitMask) {
//            continue;
//        }
//
//        if (once & bitMask) {
//            once &= ~bitMask;
//            notOnce |= bitMask;
//        } else {
//            once |= bitMask;
//        }
//    }
//
//    if (once) {
//        for (int i = 0; i < LENGHTENG; i++) {
//            if (once & (1 << i)) {
//                printf("%c", 'a' + i);
//            }
//        }
//    } else {
//        printf("N");
//    }
//
//    return 0;
//}