#include <stdio.h>
#include <string.h>

#define MAXIPLENGTH 15

enum {
    scanfError = -1
};

int main()
{
    int n = 0, m = 0;

    if (!scanf("%d", &n)) {
        return scanfError;
    }
    char ipAddressRequest[n][MAXIPLENGTH];
    for (int i = 0; i < n; i++) {
        if (!scanf("%s", ipAddressRequest[i])) {
            return scanfError;
        }
    }

    if (!scanf("%d", &m)) {
        return scanfError;
    }
    for (int i = 0; i < m; i++) {
        char ipAddressCheck[MAXIPLENGTH] = { 0 };
        if (!scanf("%s", ipAddressCheck)) {
            return scanfError;
        }
        for (int j = 0; j < n; j++) {
            if (strcmp(ipAddressRequest[j], ipAddressCheck) == 0) {
                printf("yes\n");
                break;
            }
            if (j + 1 == n) {
                printf("no\n");
                break;
            }
        }
    }
    return 0;
}